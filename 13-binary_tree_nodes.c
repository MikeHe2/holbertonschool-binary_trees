#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts nodes with at least
 * 1 child ina a binary tree.
 *
 * @tree: Is a pointer to the root node of the tree
 * to count the number of nodes.
 *
 * Return: 0 if tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t left_side = 0, right_side = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	left_side = binary_tree_nodes(tree->left);

	right_side = binary_tree_nodes(tree->right);

	return (left_side + right_side + 1);

}

