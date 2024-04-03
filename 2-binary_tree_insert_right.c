#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * binary_tree_insert_right - insert right-child node into another node
 * @parent: pointer to another node
 * @value: value to store new node
 * Return: Pointer to created node if success, or NULL if fail
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}

	parent->right = new;

	return (new);
}
