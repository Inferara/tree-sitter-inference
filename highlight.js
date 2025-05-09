#!/usr/bin/env node

const fs = require('fs');
const path = require('path');
const Parser = require('tree-sitter');
const Inference = require('./index.js');

// Read command-line arguments
const args = process.argv.slice(2);
if (args.length < 1) {
  console.error(`Usage: node ${path.basename(process.argv[1])} <file>`);
  process.exit(1);
}
const filePath = args[0];
if (!fs.existsSync(filePath)) {
  console.error(`File not found: ${filePath}`);
  process.exit(1);
}

// Load source code
const source = fs.readFileSync(filePath, 'utf8');

// Setup Tree-sitter parser
const parser = new Parser();
parser.setLanguage(Inference);
const tree = parser.parse(source);

// Load highlight queries
const Q = Parser.Query;
const QueryCursor = Parser.QueryCursor;
const queryText = fs.readFileSync(path.join(__dirname, 'queries', 'highlights.scm'), 'utf8');
const query = new Q(Inference, queryText);
const cursor = new QueryCursor();
const captures = cursor.captures(query, tree.rootNode);

// Utility: escape HTML
function escapeHtml(str) {
  return str.replace(/&/g, '&amp;')
            .replace(/</g, '&lt;')
            .replace(/>/g, '&gt;');
}

// Build list of highlight spans
const spans = captures.map(c => ({
  start: c.node.startIndex,
  end: c.node.endIndex,
  cls: c.name
}));
// Sort spans by start, then by length descending
spans.sort((a, b) => a.start - b.start || b.end - a.end);

// Merge spans into HTML
let result = '';
let pos = 0;
for (const span of spans) {
  if (span.start > pos) {
    result += escapeHtml(source.slice(pos, span.start));
  }
  const content = escapeHtml(source.slice(span.start, span.end));
  result += `<span class="${span.cls}">${content}</span>`;
  pos = Math.max(pos, span.end);
}
if (pos < source.length) {
  result += escapeHtml(source.slice(pos));
}

// Output wrapped in <pre><code>
console.log(`<pre><code>${result}</code></pre>`);