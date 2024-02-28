#include "binary_trees.h"

/**
 * binary_tree_sibling- function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to sibling node or NULL
 * If node is NULL or the parent is NULL or If node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	parent = node->parent;

	if (node == NULL || parent == NULL)
		return (NULL);

	if (parent->left == node)
		return (parent->right);

	if (parent->right == node)
		return (parent->left);

	return (NULL);
}
