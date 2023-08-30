#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

typedef struct binary_tree_s heap_t;

/* Print a binary tree */
void binary_tree_print(const binary_tree_t *tree);

/* Create a new binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Convert an array to a Max Binary Heap */
heap_t *array_to_heap(int *array, size_t size);

/* Insert a value into a Max Binary Heap */
heap_t *heap_insert(heap_t **root, int value);

/* Extract the root node of a Max Binary Heap */
int heap_extract(heap_t **root);

/* Convert a Binary Max Heap to a sorted array of integers */
int *heap_to_sorted_array(heap_t *heap, size_t *size);

/* Delete a binary tree */
void binary_tree_delete(binary_tree_t *tree);

#endif /* _BINARY_TREES_H_ */

