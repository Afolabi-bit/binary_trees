#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the height.
 * Return: the height of the tree, otherwise 0
 * If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

int leftHeight = binary_tree_height(tree->left);
int rightHeight = binary_tree_height(tree->right);

if (leftHeight > rightHeight)
return leftHeight + 1;
else
return rightHeight + 1;

}