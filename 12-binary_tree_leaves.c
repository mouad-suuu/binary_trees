#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the leaves
 *
 * Return: Number of leaves in the binary tree, or 0 if tree is NULL
 */


size_t binary_tree_leaves(const binary_tree_t *tree){

if (tree == NULL) return 0;

if (tree->left == NULL && tree->right == NULL) return 1;

size_t left_leave = binary_tree_leaves(tree->left);
size_t right_leave = binary_tree_leaves(tree->right);

return left_leave + right_leave;
}