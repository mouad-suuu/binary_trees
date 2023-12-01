#include "binary_trees.h"

/**
 * funct that puts node on left side on another node
 * 
 *
 * @parent: pointe node to insert the left side in
 * @value: value store in the new node
 *
 * Return: return failure return sucess if the node created 
 */

binary_tree_t *
binary_tree_insert_left (binary_tree_t * parent, int value)
{
  binary_tree_t *nn = NULL;

  if (parent != NULL)
    {
      nn = malloc (sizeof (binary_tree_t));
      if (nn != NULL)
	{
	  nn->left = parent->left;
	  nn->right = NULL;
	  nn->parent = parent;
	  nn->n = value;
	  if (parent->left != NULL)
	    parent->left->parent = nn;
	  parent->left = nn;
	}
    }
  return (nn);

