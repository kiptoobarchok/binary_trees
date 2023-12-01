#include "binary_trees.h"

/**
 * binary_tree_preorder- funct to visit binary tree using pre-order traversal
 * @tree: binary tree to trvaerse
 * @func: pointer to function to call each node
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
