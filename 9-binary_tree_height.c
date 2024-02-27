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
 * binary_tree_height- a function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: Height of binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);

	height = binary_tree_level(tree) - 1;

	return (height);
}
