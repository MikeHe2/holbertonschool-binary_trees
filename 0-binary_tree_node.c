#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to node to create
 * @value: value of new node
 * Return: NULL if fail, pointer to new node if success
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
