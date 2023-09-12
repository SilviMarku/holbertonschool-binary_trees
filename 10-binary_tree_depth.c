#include "binary_trees.h"
/**
 * binary_tree_depth - function that finds the depth of a node in a binary tree
 * @tree: is a pionter to the node to measure the depth
 * Return: depth of the node in the banery tree, or 0 if the tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
		if (tree == NULL || (tree->parent == NULL))
		return (0);
		else
		{
			size_t depth = binary_tree_depth(tree->parent);

			return (depth + 1);
		}
}
