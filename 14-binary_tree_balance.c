#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_height - function that finds the height of a binary tree
 * @tree: tree
 * Return: height of the tree where root is level 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);
	else
	{
		size_t left_side;
		size_t right_side;

		left_side = binary_tree_height(tree->left);
		right_side = binary_tree_height(tree->right);
		if (left_side > right_side)
			return (left_side + 1);
		else
			return (right_side + 1);
	}
}

/**
 * binary_tree_balance - function thet finds the balance factor fo a binary
 * tree
 * @tree: tree
 * Return: number of nodes in the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		int balance;
		int leftHeight = (int) binary_tree_height(tree->left);
		int rightHeight = (int) binary_tree_height(tree->right);

		balance = leftHeight - rightHeight;
		return (balance);
	}
}
