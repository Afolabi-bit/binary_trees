#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the height.
 * Return: the height of the tree, otherwise 0
 * If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t leftHeight = 0;
size_t rightHeight = 0;

if (tree == NULL)
return (0);

if (tree->left)
{
leftHeight = 1 + binary_tree_height(tree->left);
}
else
{
leftHeight = 0;
}
if (tree->right)
{
rightHeight = 1 + binary_tree_height(tree->right);
}
else
{
rightHeight = 0;
}
return (leftHeight > rightHeight ? leftHeight : rightHeight);

}


/**
 * binary_tree_levelorder - goes through a binary
 * tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: void
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
size_t height, i = 0;

if (tree == NULL || func == NULL)
return;

height = binary_tree_height(tree) + 1;
for (i = 1; i <= height; i++)
level_order(tree, func, i);
}

/**
 * level_order - goes through a binary tree using post-order traverse
 * @tree: tree to traverse
 * @func: pointer to a function to call for each node
 * @level: the level of the tree to call func upon
 * Return: void
 */
void level_order(const binary_tree_t *tree, void (*func)(int), size_t level)
{
if (level == 1)
func(tree->n);
else
{
level_order(tree->left, func, level - 1);
level_order(tree->right, func, level - 1);
}
}
