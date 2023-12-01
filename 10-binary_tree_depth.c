#include "binary_trees.h"

/**
 * binary_tree_depth - function to measure depth of binary tree
 * @tree: binary tree to be measured
 * Return: depth of node, 0 if tree == NULL
 *
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
