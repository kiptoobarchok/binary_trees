#include "binary_trees.h"

/**
 * binary_tree_delete - func to delete an entire binary tree
 * @tree: pointer to the root node
 * Return: NULL if tree is NULL
 *
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
