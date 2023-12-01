#include "binary_trees.h"

/**
 * binary_tree_insert_right - func to insert node as right child
 * @parent: ptr to parent node
 * @value: value to be inserted to new node
 *
 * Return: ptr to new node / NULL on failure or parent == NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
	{
		return (NULL);
	}

	new = malloc(sizeof(binary_tree_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;

	if (new->right)
	{
		new->right->parent = new;
	}

	return (new);
}
