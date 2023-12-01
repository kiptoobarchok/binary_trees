#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with at least one child
 * @tree: binary tree
 * Return: number of nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
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
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: binary tree
 * Return: number of leaves, 0 if tree == NULL
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (1);
	}
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

