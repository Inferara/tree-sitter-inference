const path = require('path');
const binding = require('./bindings/node');
// Load node type information (prefer the generated src/node-types.json)
let staticData;
try {
  staticData = require(path.join(__dirname, 'src', 'node-types.json'));
} catch (e) {
  try {
    staticData = require(path.join(__dirname, 'node-types.json'));
  } catch {
    staticData = [];
  }
}

// Use the .language property from the native binding
const language = binding.language || binding;

// Attach the two properties that tree-sitter-highlight needs
language.nodeTypeNamesById = Array.isArray(staticData) ? staticData.map(e => e.type) : [];
language.types = staticData;

module.exports = language;
