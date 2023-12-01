#include "binary_trees.h"

/**
 * binary_tree_postorder- visits a binary tree using post-order traversal
 * @tree: binary tree to be traversed
 * @func: ptr to function call for each node
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
