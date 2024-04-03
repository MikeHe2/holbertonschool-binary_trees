#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * binary_tree_is_leaf - check if node is leaf
 * @node: pointer to node to check
 * Return: 1 if node is leaf, 0 or NULL if not
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
	return (0);

	return (1);
}
