#include "binary_trees.h"

/**
 * binary_tree_delete - a function that deletes the binary tree
 *
 * @tree: data structure to e deleted
 *
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
