Binary Trees Project
====================

This project implements a variety of binary tree operations in C. It includes functions for creating, modifying, and traversing binary trees, as well as checking properties such as balance, fullness, and finding common ancestors.

Table of Contents
-----------------
- [Description](#description)
- [Project Structure](#project-structure)
- [Features](#features)
- [Usage](#usage)
- [Compilation](#compilation)
- [Contributing](#contributing)
- [License](#license)

Description
-----------
This project is a collection of functions for working with binary trees in C. It covers a wide range of operations to help build, manipulate, and analyze binary trees efficiently. Whether you need to create new nodes, insert elements, traverse the tree, or perform checks on its properties, this project provides a set of tools to simplify the process.

Project Structure
-----------------
The project is organized as follows:

- `binary_trees.h`: The main header file containing function prototypes and necessary structures.
- `binary_tree_print.c`: Source file with functions to visualize binary trees in the console.
- `0-binary_tree_node.c`: Source file containing functions to create binary tree nodes.
- `1-binary_tree_insert_left.c`: Source file with functions to insert nodes to the left.
- `2-binary_tree_insert_right.c`: Source file with functions to insert nodes to the right.
- `3-binary_tree_delete.c`: Source file with functions to delete a binary tree.
- `4-binary_tree_is_leaf.c`: Source file with functions to check if a node is a leaf.
- ... (Additional source files for various tree operations)

Features
--------
This project offers a comprehensive set of features, including:
- Node creation: Functions to create new binary tree nodes.
- Node insertion: Methods for inserting nodes to the left or right of a given node.
- Traversal: Algorithms to traverse the tree using different techniques (in-order, pre-order, post-order).
- Properties: Checks for properties such as balance, fullness, leaf count, and more.
- Common Ancestors: Identifying the lowest common ancestor of two nodes in the tree.
- Level-order traversal: A breadth-first traversal method to explore the tree layer by layer.

Usage
-----
To use this project, include the necessary header file in your C code:

```c
#include "binary_trees.h"

