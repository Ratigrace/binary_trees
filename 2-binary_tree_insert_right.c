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
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
