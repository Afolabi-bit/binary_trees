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

if (node->parent->left)
{
temp = node->parent->left;
}
else if (node->parent->right)
{
temp = node->parent->right;
}
else
{
return (NULL)
}

return (temp);
}
