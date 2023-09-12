#include "binary_trees.h"
/**
 * binary_tree_size - function that finds the size of a binary tree
 * @tree: tree
 * Return: size of the tree
 */

size_t binary_tree_sise(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;
	
	size_t leftSize = binary_tree_size(tree->left);
	size_t rightSize = binary_tree_size(tree->right);

	return (leftSize + rightSize + 1);
}
