#include "binary_trees.h"

/**
* binary_tree_is_full - function that checks if a tree is full
* @tree: tree to be checked
* Return: 0 if its not full and 1 if it is
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left)
			&& binary_tree_is_full(tree->right));

	return (0);
}
