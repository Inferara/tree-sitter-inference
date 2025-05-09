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

// Attach the two properties that tree-sitter-highlight needs
// Expose node type names and types for tree-sitter-highlight (if used)
binding.nodeTypeNamesById = Array.isArray(staticData) ? staticData.map(e => e.type) : [];
binding.types = staticData;
// Prevent tree-sitter JS from re-initializing node subclasses (avoids version checks)
binding.nodeSubclasses = [];

// Export the binding object (with .language) so tree-sitter JS can unwrap it properly
module.exports = binding;
