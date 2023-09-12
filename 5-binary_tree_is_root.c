#include "binary_trees.h"
#include <stdio.h>

/**
* binary_tree_is_root - function that checks if a given node is root
* @node: node to be checked
* Return: 0 if node is not root and 1 if it is
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
