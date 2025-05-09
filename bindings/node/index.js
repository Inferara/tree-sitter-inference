const root = require("path").join(__dirname, "..", "..");

const binding = require("node-gyp-build")(root);

try {
  binding.nodeTypeNamesById = require("../../src/node-types.json").map(e => e.type);
  binding.types = require("../../src/node-types.json");
} catch (_) {
  binding.nodeTypeNamesById = [];
  binding.types = [];
}

module.exports = binding;
