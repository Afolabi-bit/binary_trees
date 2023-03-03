#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to node to find sibling
 * Return: pointer to sibling node
 * if node is NULL or parent is NULL, return NULL
 * if node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
binary_tree_t *temp;

if (!node || !node->parent)
return (NULL);

temp = malloc(sizeof(binary_tree_t));
if (!temp)
return (NULL);

if (node->parent->left == node)
{
temp = node->parent->right;
}
else if (node->parent->right == node)
{
temp = node->parent->left;
}
else
{
return (NULL);
}

return (temp);
}
