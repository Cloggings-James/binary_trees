#include <stdlib.h>
#include "binary_trees.h"
#include "queue.h"

/**
 * binary_tree_levelorder - Traverses a binary tree using level-order traversal
 * @tree: Pointer to the root node of the tree
 * @func: Pointer to a function to call for each node
 *
 * This function traverses the binary tree in level-order and applies the given
 * function to each node's value.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    queue_t *queue = NULL;

    if (tree == NULL || func == NULL)
        return;

    queue_push(&queue, (void *)tree);

    while (!queue_is_empty(queue))
    {
        const binary_tree_t *current = (const binary_tree_t *)queue_peek(queue);

        queue_pop(&queue);
        func(current->n);

        if (current->left != NULL)
            queue_push(&queue, (void *)current->left);
        if (current->right != NULL)
            queue_push(&queue, (void *)current->right);
    }

    queue_delete(&queue);
}

