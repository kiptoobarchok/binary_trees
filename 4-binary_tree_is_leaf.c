#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to be checked
 * Return: 1 (node is leaf) else 0, node == NULL return 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
