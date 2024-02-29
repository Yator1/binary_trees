#include "binary_trees.h"

/**
 * binary_tree_levelorder-  function that goes through a binary tree
 * using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: void
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int front = 0, rear = 0;
	const binary_tree_t **queue, *current;

	if (tree == NULL || func == NULL)
		return;

	queue = (const binary_tree_t **)malloc(sizeof(binary_tree_t *) * MAX_Q_SIZE);

	if (queue == NULL)
		return;

	queue[rear++] = tree;

	while (front < rear)
	{
		current = queue[front++];
		func(current->n);

		if (current->left != NULL)
			queue[rear++] = current->left;
		if (current->right != NULL)
			queue[rear++] = current->right;
	}
	free(queue);
}
