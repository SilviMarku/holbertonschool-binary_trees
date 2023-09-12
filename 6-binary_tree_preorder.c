#include "binary_trees.h"
#include <stdio.h>

/**
* binary_tree_preorder - function that goes through a binary tree using 
* pre-order traversal
* @root: a pointer to the root node of the tree to traverse
* @func: is a pointer to a function to call for each node traverse 
* Return: 0 if node is not root and 1 if it is
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree != NULL)
		func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
