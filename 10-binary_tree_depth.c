#include "binary_trees.h"

/**
 * binary_tree_depth- function that measures the depth of a node in binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth of BT or 0 if tree = NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	for (; tree->parent != NULL; tree = tree->parent)
		depth++;
	return (depth);
}
