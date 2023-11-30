#include "binary_trees.h"

/**
 * checks if a node is a leaf
 * 
 *
 * Return: 1 if it's a leaf, 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node) {

     return (node != NULL && node->left == NULL && node->right == NULL);
}
