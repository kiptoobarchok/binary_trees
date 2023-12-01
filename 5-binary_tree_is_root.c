#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if given node is root
 * @node: node to be checked
 * Return: 1 if node else 0, node == NULL return 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
