#include "binary_trees.h"



/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of tree, otherwise 0
 * if tree is NULL, return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;

if (tree == NULL)
return (0);

if (tree->parent == NULL)
{
return (0);
}

depth = 1 + binary_tree_depth(tree->parent);
return (depth);

}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 for perfect tree, oyherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int b, left_perfect, right_perfect = 0;
size_t left_depth, right_depth = 0;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);

if (tree->left && tree->right)
{
left_perfect = binary_tree_is_perfect(tree->left);
right_perfect = binary_tree_is_perfect(tree->right);
left_depth = binary_tree_depth(tree->left);
right_depth = binary_tree_depth(tree->right);

return (left_perfect && right_perfect && (left_depth == right_depth))
}
}