#include "binary_trees.h"
/**
 * binary_tree_size - function that finds the size of a binary tree
 * @tree: tree
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftSize, rightSize;
	
	if (tree == NULL)
		return(0);
	
	leftSize = binary_tree_size(tree->left);
	rightSize = binary_tree_size(tree->right);

	return (leftSize + rightSize + 1);
}
