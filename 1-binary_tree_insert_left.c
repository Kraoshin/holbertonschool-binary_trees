#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that create a left node to a node
 *
 * @parent: pointer to the mem adress of the parent of the created node
 * @value: the value of the node
 *
 * Return: NULL if !parent, the created node otherwise
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_n;

	if (!parent)
		return (NULL);

	left_n = binary_tree_node(NULL, value);

	if (!left_n)
		return (NULL);

	if (parent->left)
	{
		parent->left->parent = left_n;
		left_n->left = parent->left;
	}

	parent->left = left_n;
	left_n->parent = parent;

	return (left_n);
}
