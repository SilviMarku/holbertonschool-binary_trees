#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_inorder - function that goes through a binary tree using
 * pre-order traversal
 * @tree: pointer to the root node
 * @func: function to be appliad to all nodes traversed
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
	}

	if (tree->right != NULL)
	{
		binary_tree_inorder(tree->right, func);
	}
	else
		func(tree->n);
}
