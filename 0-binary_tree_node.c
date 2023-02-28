#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
*/
*binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *temp = (binary_tree_t) malloc(sizeof(binary_tree_t));
    temp->n = value;
    temp->left = NULL;
    temp->right = NULL;

    if (parent == NULL)
    {
        parent = temp;
    }
}