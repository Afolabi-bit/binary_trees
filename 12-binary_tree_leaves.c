#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: Number of leave, othewise 0
 * if tree is Null, return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaves = 0;

if (tree == NULL)
return (0);

if (tree->left)
continue;
else
leaves++;

if (tree->right)
continue;
else
leaves++;

return (leaves);
}