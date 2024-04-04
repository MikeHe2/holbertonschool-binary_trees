#include "binary_trees.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_balance - measures balance factor of binary tree
 * @tree: pointer to root node to measure balance factor
 * Return: balance factor, if fail return NULL
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Function that measures the size of a binary tree.
 *
 * @tree: Is a pointer to the root node of the tree to measure the size.
 *
 * Return: 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)

{
	size_t height_l = 0, height_r = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	height_l = binary_tree_height(tree->left);

	height_r = binary_tree_height(tree->right);


	return ((height_l >= height_r ? height_l : height_r) + 1);
}
