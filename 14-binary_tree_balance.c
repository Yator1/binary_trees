#include "binary_trees.h"

/**
 * binary_tree_level- a function that measures the level of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: Height of binary tree
 */

size_t binary_tree_level(const binary_tree_t *tree)
{
	size_t left_level, right_level, level;

	if (tree == NULL)
		return (0);

	left_level = binary_tree_level(tree->left);
	right_level = binary_tree_level(tree->right);

	if (left_level > right_level)
	{
		level = 1 + left_level;
		return (level);
	}
	else
	{
		level = 1 + right_level;
		return (level);
	}
}

/**
 * binary_tree_balance- function that measures the
 * balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL or the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_level(tree->left);
	right_height = binary_tree_level(tree->right);

	return ((int)(left_height - right_height));
}
