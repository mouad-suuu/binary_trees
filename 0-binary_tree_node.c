#include "binary_trees.h"

/**
 * func create binary tree
 *
 * @parent: point to parent binary tree
 * @value: value to put in binary tree
 *
 * Return: return sucess if the binary tree created 
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nn = NULL;

	nn = malloc(sizeof(binary_tree_t));
	if (nn != NULL)
	{
		nn->left = NULL;
		nn->right = NULL;
		nn->parent = parent;
		nn->n = value;
	}
	return (nn);
}

