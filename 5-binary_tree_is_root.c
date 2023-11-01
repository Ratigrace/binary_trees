#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks whther a node is a root
 *
 * @node: the pointer to check
 *
 * Return: Result
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->parent == NULL);
}
