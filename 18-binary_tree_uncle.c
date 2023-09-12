#include "binary_trees.h"
/**
 *binary_tree_uncle - finds the uncle of a node
 *@node: node
 *Return: pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL
	|| node->parent->parent == NULL)
		return (NULL);

	if (node->parent->n > node->parent->parent->n)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}
