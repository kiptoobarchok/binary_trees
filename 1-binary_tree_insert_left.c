#include "binary_trees.h"

/**
 * binary_tree_insert_left -func that inserts a node as left-child
 * @parent: pointer to parent node
 * @value: value to be inserted to new node
 * Return: ptr to the new nodeSS
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}
