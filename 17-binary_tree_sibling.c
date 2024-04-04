#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds the siblings of a node.
 *
 * @node: Is a pointer to the node to find the sinling.
 *
 * Return: If node and parent is NULL, return NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}

}

