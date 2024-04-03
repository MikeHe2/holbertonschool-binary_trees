#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree.
 *
 * @tree: Is a pointer to the root node of the tree to measure the size.
 *
 * Return: 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)

{

	size_t left_side = 0, right_side = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_side = binary_tree_size(tree->left);

	right_side = binary_tree_size(tree->right);

	return (left_side + right_side + 1);
}

