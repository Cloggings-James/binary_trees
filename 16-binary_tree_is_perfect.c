#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    if (left_height == right_height)
    {
        if (left_height == 0)
            return (1);
        return (binary_tree_is_perfect(tree->left) &&
                binary_tree_is_perfect(tree->right));
    }

    return (0);
}
