#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"  // Include the binary tree header

int main(void)
{
    // Create a binary tree and demonstrate its visualization
    binary_tree_t *root = binary_tree_node(NULL, 10);
    root->left = binary_tree_node(root, 5);
    root->right = binary_tree_node(root, 15);
    root->left->left = binary_tree_node(root->left, 3);
    root->left->right = binary_tree_node(root->left, 7);
    root->right->left = binary_tree_node(root->right, 12);
    root->right->right = binary_tree_node(root->right, 20);

    // Print the binary tree
    printf("Original Binary Tree:\n");
    binary_tree_print(root);

    // Demonstrate heap insertion and visualization
    // ...

    // Demonstrate heap extraction and visualization
    // ...

    // Demonstrate heap-to-sorted-array conversion and visualization
    // ...

    // Clean up the binary tree and allocated memory
    binary_tree_delete(root);

    return 0;
}

