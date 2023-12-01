#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: binary tree to be checked
 *Return: if tree is NULL : 0
 *
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	power = (size_t)_pow_recursion(2, height + 1);
	return (power - 1 == nodes);
}

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


/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: binary tree
 * Return: size of tree, 0 if tree == NULL
 *
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}


/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: the value to exponentiate
 *@y: the power to raise x to
 *Return: x to the power of y, or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));

}
