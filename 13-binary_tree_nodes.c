#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes
 *		with at least 1 child in a binary tree
 *
 * @tree: pointer to the binary tree
 *
 * Return: Number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left != NULL || tree->right != NULL)
	{
		size_t left_nodes = binary_tree_nodes(tree->left);
		size_t right_nodes = binary_tree_nodes(tree->right);

		return (1 + left_nodes + right_nodes);
	}
	else
	{
		return (0);
	}
}
