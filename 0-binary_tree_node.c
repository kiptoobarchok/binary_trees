#include "binary_trees.h"

/**
 * binary_tree_node - func to create binary tree
 * @parent: pointer to parent node
 * @value: value to insert in new node
 *
 * Return: pointer to new node or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
