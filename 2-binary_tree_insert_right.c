#include "binary_trees.h"

/**
 * binary_trees_insert_right - a function that inserts a right node
 *
 * @parent: pointer to the root node
 * @value: value to insert
 *
 * Return: right node
 *
 * Description: This function checks if parent already has a child
 *		then new node takes place of the old
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = new_node;

	parent->right = new_node;

	return (new_node);
}