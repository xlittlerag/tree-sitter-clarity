# tree-sitter-clarity
> 💡 this grammar is still in development.

This repository contains a grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

The goal of this project is to provide an parser efficient low-dependency parser for clarity which targets most solidity versions in use and is designed for enabling metaprogramming.


### Navigating this repository
The primary file in this repository is `grammar.js` which describes the tree-sitter grammar.

```
# Primary file:
grammar.js
# Tests:
/test/**/*

# Auto generated:
/src/**/*
binding.gyp
```

Major inspriration & some structures have been taken from tree-sitter-solidity, a big thanks to the contributors to this repo!
