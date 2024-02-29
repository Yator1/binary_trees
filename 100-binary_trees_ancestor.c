#include "binary_trees.h"

/**
 * binary_trees_ancestor- function that finds the
 * lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: a pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 * or NULL If no common ancestor was found
 */

binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *ancestors[100];
	size_t index, ancestors_num = 0;
	const binary_tree_t *curr;

	if (first == NULL || second == NULL)
		return (NULL);

	/*traversing from first node to root*/
	curr = first;
	while (curr != NULL)
	{
		ancestors[ancestors_num++] = (binary_tree_t *)curr;
		curr = curr->parent;
	}

	/*traversing from second to root while comparing to 1st stored data*/
	curr = second;
	while (curr != NULL)
	{
		for (index = 0; index < ancestors_num; index++)
		{
			if (curr == ancestors[index])
			{
				return ((binary_tree_t *)curr);
			}
		}
		curr = curr->parent;
	}
	return (NULL);
}
