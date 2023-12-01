#include "binary_trees.h"

/**
 * func counts the leaves in a binary tree
 * 
 *
 * Return: number of l
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l;
	size_t r;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);

	return (l + r);
}

