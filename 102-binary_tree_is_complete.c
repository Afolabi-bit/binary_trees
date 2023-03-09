#include "binary_trees.h"


/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size, otherwise 0
 * if tree is NULL, return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size = 0;

if (tree == NULL)
return (0);

size =  binary_tree_size(tree->left);
size = size + 1 + binary_tree_size(tree->right);
return (size);

}


/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to teh root node of the tree
 * Return: 1 for complete tree, otherwise 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
size_t t_size = 0;

if (tree == NULL)
return (0);

t_size = binary_tree_size(tree);

return (is_complete_helper(tree, 0, t_size));
}

/**
 * btic_helper - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 * @index: node index to check
 * @size: number of nodes in the tree
 *
 * Return: 1 if the tree is complete
 *         0 if the tree is not complete
 *         0 if tree is NULL
 */
int is_complete_helper(const binary_tree_t *tree, size_t index, size)
{
if (tree == NULL)
return (1);

if (index >= size)
return (0);

return (is_complete_helper(tree->left, 2 * index + 1, size) &&
        is_complete_helper(tree->right, 2 * index + 2, size));
}