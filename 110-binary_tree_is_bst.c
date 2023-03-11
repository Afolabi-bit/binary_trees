#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks for valid BST
 * @tree: pointer to the root of a tree
 * Return: 1 for valid BST, otherwise 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
if (tree == NULL)
return (1);

if (tree->left != NULL && root->left->n > tree->n)
return (0);
}

if (tree->right != NULL && tree->right->n <= tree->n)
return (0);

return (binary_tree_is_bst(tree->left) && binary_tree_is_bst(tree->right))