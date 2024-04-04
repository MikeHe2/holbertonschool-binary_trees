#include "binary_trees.h"
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_leaves - counts leaves in binary tree
 * @tree: pointer to root node of tree to count leaves from
 * Return: number of leaves on tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
	leaves += (!tree->left && !tree->right) ? 1 : 0;
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
