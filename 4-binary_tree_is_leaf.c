#include "binary_trees.h"
#include <stdio.h>

/**
* binary_tree_is_leaf - function that checks if a node is a leaf
* @node: node to be checked
* Return: 0 if node is not a leaf and 1 if it is
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
