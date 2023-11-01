#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks whether data is a leaf
 *
 * @node: pointer to check
 *
 * Return: result
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->left == NULL && node->right == NULL);
}
