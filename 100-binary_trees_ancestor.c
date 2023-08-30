#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor, or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t
*first, const binary_tree_t *second)
{
const binary_tree_t *temp1, *temp2;
size_t depth1, depth2;

if (first == NULL || second == NULL)
return (NULL);

temp1 = first;
temp2 = second;
depth1 = binary_tree_depth(temp1);
depth2 = binary_tree_depth(temp2);

while (depth1 > depth2)
{
temp1 = temp1->parent;
depth1--;
}
while (depth2 > depth1)
{
temp2 = temp2->parent;
depth2--;
}

while (temp1 != temp2)
{
temp1 = temp1->parent;
temp2 = temp2->parent;
}

return ((binary_tree_t *)temp1);
}

