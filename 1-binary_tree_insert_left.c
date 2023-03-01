#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the child in
 * @value: the value to store in the new node
 * Return: pointer to created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *temp = malloc(sizeof(binary_tree_t));

if (!parent)
{
return (NULL);
}

if (temp == NULL)
{
return (NULL);
}
temp->parent = parent;
temp->n = value;
temp->left = parent->left;
temp->right = NULL;
parent->left = temp;

if (temp->left)
{
temp->left->parent = temp;
}
return (temp);
}
