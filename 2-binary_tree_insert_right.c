#include "binary_trees.h"

/**
 * binary_tree_insert_right - funct to insert to the right of the parent node
 * @parent: parent node
 * @value: value of the node
 * Return: new node child
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_n;

	if (!parent)
		return (NULL);

	right_n = binary_tree_node(NULL, value);

	if (!right_n)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = right_n;
		right_n->right = parent->right;
	}

	parent->right = right_n;
	right_n->parent = parent;

	return (right_n);
}
