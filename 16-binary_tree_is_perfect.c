#include "binary_trees.h"

/**
 * _binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
size_t height_l = 0;
size_t height_r = 0;
if (!tree)
return (0);

height_l = tree->left ? 1 + _binary_tree_height(tree->left) : 0;
height_r = tree->right ? 1 + _binary_tree_height(tree->right) : 0;
return (height_l > height_r ? height_l : height_r);
}

/**
 * _binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Size of the tree, 0 if tree is NULL
 */
size_t _binary_tree_size(const binary_tree_t *tree)
{
if (!tree)
return (0);

return (_binary_tree_size(tree->left) + _binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t height = 0;
size_t nodes = 0;
size_t power = 0;

if (!tree)
return (0);

if (!tree->right && !tree->left)
return (1);

height = _binary_tree_height(tree);
nodes = _binary_tree_size(tree);

power = (size_t)_pow_recursion(2, height + 1);
return (power - 1 == nodes);
}

