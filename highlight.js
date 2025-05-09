#!/usr/bin/env node

// Simple regex-based syntax highlighter for Inference language
const fs = require('fs');
const path = require('path');

const args = process.argv.slice(2);
if (args.length !== 1) {
  console.error(`Usage: node ${path.basename(process.argv[1])} <file.inf>`);
  process.exit(1);
}
const file = args[0];
let src;
try {
  src = fs.readFileSync(file, 'utf8');
} catch (e) {
  console.error(`Error reading file ${file}:`, e.message);
  process.exit(1);
}

// Escape HTML
function escapeHtml(s) {
  return s.replace(/&/g, '&amp;')
          .replace(/</g, '&lt;')
          .replace(/>/g, '&gt;');
}

// Define token patterns and classes
const patterns = [
  {cls: 'comment',     re: /^\/\/\/.*(?:\r?\n|$)/},
  {cls: 'string',      re: /^"(?:\\.|[^"\\])*"/},
  {cls: 'type',        re: /^(?:\b(?:i8|i16|i32|i64|u8|u16|u32|u64|bool)\b|\(\))/},
  {cls: 'keyword',     re: /^(?:\b(?:fn|forall|exists|assume|unique|loop|if|else|break|return|let|const|type|enum|struct|use|spec|external)\b)/},
  {cls: 'boolean',     re: /^(?:\b(?:true|false)\b)/},
  {cls: 'number',      re: /^-?\d+(?:\.\d+)?/},
  {cls: 'operator',    re: /^(?:->|::|\*\*|==|!=|<=|>=|&&|\|\||<<|>>|[=+\-*/%&|^<>])/},
  {cls: 'punctuation', re: /^[{}\[\]();,]/},
  {cls: 'identifier',  re: /^\b[A-Za-z_]\w*\b/},
  {cls: 'whitespace',  re: /^\s+/},
  {cls: 'text',        re: /^./}
];

// Highlight
let out = '';
let pos = 0;
while (pos < src.length) {
  let matched = false;
  for (const {cls, re} of patterns) {
    const m = re.exec(src.slice(pos));
    if (!m) continue;
    const tok = m[0];
    const esc = escapeHtml(tok);
    if (cls === 'whitespace' || cls === 'text') {
      out += esc;
    } else {
      out += `<span class="${cls}">${esc}</span>`;
    }
    pos += tok.length;
    matched = true;
    break;
  }
  if (!matched) { out += escapeHtml(src[pos]); pos++; }
}

// Wrap in pre/code
process.stdout.write('<pre><code>' + out + '</code></pre>');