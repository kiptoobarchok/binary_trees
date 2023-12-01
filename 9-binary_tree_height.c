#include "binary_trees.h"

/**
 * binary_tree_height - measures height of binary tree
 * @tree: binary tree
 * Return: height of tree , 0 if tree == NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		height_l = 1 + binary_tree_height(tree->left);
	}
	else
	{
		height_l = 0;
	}

	if (tree->right != NULL)
	{
		height_r = 1 + binary_tree_height(tree->right);
	}
	else
	{
		height_r = 0;
	}

	return (height_l > height_r ? height_l : height_r);
}
