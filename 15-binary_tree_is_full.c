#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If it's a leaf node, it's considered full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If either subtree is NULL, it's not full */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Check the left and right subtrees recursively */
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
