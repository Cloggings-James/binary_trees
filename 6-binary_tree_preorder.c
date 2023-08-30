#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: Function that traverses a binary tree using pre-order
 * traversal and applies the given function to each node's value.
 * If tree or func is NULL, do nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree && func)
    {
        func(tree->n);              // Call the function on the current node
        binary_tree_preorder(tree->left, func);    // Traverse the left subtree
        binary_tree_preorder(tree->right, func);   // Traverse the right subtree
    }
}

