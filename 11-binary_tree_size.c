#include "binary_trees.h"

/**
 * binary_tree_size - Function to measure the size of a binary tree
 * @tree: pointer to the binary tree
 *
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);

	return (1 + left_size + right_size);
}
