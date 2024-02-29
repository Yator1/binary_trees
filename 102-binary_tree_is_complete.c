#include "binary_trees.h"
#include <stdbool.h>

/**
 * binary_tree_is_complete- function that checks if a binary tree is complete
 * @tree:  pointer to the root node of the tree to check
 * Return: 0 If tree is NULL otherwise 1
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int front = 0, rear = 0;
	bool not_full_node = false;
	bool right_child = false;
	const binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * MAX_Q_SIZE);
	const binary_tree_t *current;

	if (tree == NULL)
		return (0);
	if (queue == NULL)
		return (0);

	queue[rear++] = tree;
	while (front < rear)
	{
		current = queue[front++];
		if (current->left)
		{
			if (not_full_node || right_child)
				return (0);
			queue[rear++] = current->left;
		}
		else
		{
			if (current->right)
				right_child = true;
			else
				not_full_node = true;
		}
		if (current->right)
		{
			if (not_full_node || right_child)
				return (0);
			queue[rear++] = current->right;
		}
		else
		{
			if (current->left)
				not_full_node = true;
		}
	}
	free(queue);
	return (1);
}
