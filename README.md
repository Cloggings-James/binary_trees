Binary Trees Project
====================

This project implements a variety of binary tree operations in C. It includes functions for creating, modifying, and traversing binary trees, as well as checking properties such as balance, fullness, and finding common ancestors.

Table of Contents
-----------------
- [Description](#description)
- [Project Structure](#project-structure)
- [Features](#features)
- [File Descriptions](#file-descriptions)
- [Usage](#usage)
- [Compilation](#compilation)
- [Contributing](#contributing)
- [License](#license)

Description
-----------
This project is a collection of functions for working with binary trees in C. It covers a wide range of operations to help build, manipulate, and analyze binary trees efficiently. Whether you need to create new nodes, insert elements, traverse the tree, or perform checks on its properties, this project provides a set of tools to simplify the process.

Project Structure
-----------------
The project is structured as follows:

- `binary_trees.h`: The main header file containing function prototypes and necessary structures.
- `binary_tree_print.c`: Source file with functions to visualize binary trees in the console.
- `0-binary_tree_node.c`: Source file containing functions to create binary tree nodes.
- `1-binary_tree_insert_left.c`: Source file with functions to insert nodes to the left.
- `2-binary_tree_insert_right.c`: Source file with functions to insert nodes to the right.
- `3-binary_tree_delete.c`: Source file with functions to delete a binary tree.
- `4-binary_tree_is_leaf.c`: Source file with functions to check if a node is a leaf.
- `5-binary_tree_is_root.c`: Source file with functions to check if a node is a root.
- `6-binary_tree_preorder.c`: Source file with functions for pre-order traversal.
- `7-binary_tree_inorder.c`: Source file with functions for in-order traversal.
- `8-binary_tree_postorder.c`: Source file with functions for post-order traversal.
- `9-binary_tree_height.c`: Source file with functions to calculate the height of the tree.
- `10-binary_tree_depth.c`: Source file with functions to calculate the depth of a node.
- `11-binary_tree_size.c`: Source file with functions to calculate the size of the tree.
- `12-binary_tree_leaves.c`: Source file with functions to count the number of leaves.
- `13-binary_tree_nodes.c`: Source file with functions to count nodes with at least 1 child.
- `14-binary_tree_balance.c`: Source file with functions to calculate the balance factor.
- `15-binary_tree_is_full.c`: Source file with functions to check if a tree is full.
- `16-binary_tree_is_perfect.c`: Source file with functions to check if a tree is perfect.
- `17-binary_tree_sibling.c`: Source file with functions to find the sibling of a node.
- `18-binary_tree_uncle.c`: Source file with functions to find the uncle of a node.
- `100-binary_trees_ancestor.c`: Source file with functions to find the lowest common ancestor.
- `101-binary_tree_levelorder.c`: Source file with functions for level-order traversal.
- `queue.c`: Source file with queue implementation.
- `queue.h`: Header file containing function prototypes for queue operations.
- `binary_tree_print.c`: Source file with functions to visualize binary trees in the console.

Features
--------
This project offers a comprehensive set of features, including:
- Node creation: Functions to create new binary tree nodes.
- Node insertion: Methods for inserting nodes to the left or right of a given node.
- Traversal: Algorithms to traverse the tree using different techniques (in-order, pre-order, post-order).
- Properties: Checks for properties such as balance, fullness, leaf count, and more.
- Common Ancestors: Identifying the lowest common ancestor of two nodes in the tree.
- Level-order traversal: A breadth-first traversal method to explore the tree layer by layer.

File Descriptions
-----------------
- `binary_trees.h`: Contains function prototypes and necessary structures.
- `binary_tree_print.c`: Provides functions to print binary trees in the console.
- `0-binary_tree_node.c`: Implements functions to create binary tree nodes.
- `1-binary_tree_insert_left.c`: Contains functions to insert nodes to the left.
- `2-binary_tree_insert_right.c`: Contains functions to insert nodes to the right.
- ... (Continue with descriptions for each file)

Usage
-----
To use this project, include the necessary header file in your C code:

```c
#include "binary_trees.h"

