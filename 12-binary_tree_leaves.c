#include "binary_trees.h"

/**
 * binary_tree_leaves- function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: no of leaves or 0 if tree = NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_leaves_right, num_leaves_left;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	num_leaves_left = binary_tree_leaves(tree->left);
	num_leaves_right = binary_tree_leaves(tree->right);

	return (num_leaves_left + num_leaves_right);

}
