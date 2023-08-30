#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: Function that traverses a binary tree using post-order
 * traversal and applies the given function to each node's value.
 * If tree or func is NULL, do nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree && func)
    {
        binary_tree_postorder(tree->left, func);     // Traverse the left subtree
        binary_tree_postorder(tree->right, func);    // Traverse the right subtree
        func(tree->n);                               // Call the function on the current node
    }
}

