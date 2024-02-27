#include "binary_trees.h"

/**
 * binary_tree_size- function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: 0 if tree = NULL, otherwise size of BT
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size, size;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	size = left_size + right_size + 1;

	return (size);
}
