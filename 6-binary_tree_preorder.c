#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * binary_tree_preorder - goes through binary tree with pre-order traversal
 * @tree: pointer to root node of tree to traverse
 * @func: pointer to function to call for each node
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree && func)
    {
        func(tree->n);
        binary_tree_preorder(tree->left, func);
        binary_tree_preorder(tree->right, func);
    }
}