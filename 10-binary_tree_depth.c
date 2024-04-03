#include "binary_trees.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_depth - measures depth of node in binary tree
 * @tree: pointer to node to measure depth
 * Return: if tree is NULL, return 0, but if successs, return depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
