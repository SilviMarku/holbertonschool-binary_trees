#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - function that inserts a node as
 * the right child_of another node
 *@parent: parent node
i *@value: value to the new node being inserted
 *Return: a pointer to the created node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
			return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (parent->right == NULL)
	{
		parent->right = node;
		return (node);
	}

	node->right = parent->right;
	parent->right = node;
	node->right->parent = node;
	return (node);
}
