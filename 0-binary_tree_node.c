#include "binary_trees.h"

/**
 * binary_tree_node - function that create a leaf (node without children)
 *
 * @parent: pointer to the mem adress of the parent node
 * @value: value of the created node
 *
 * Return: the created leaf or NULL if malloc failed
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n = malloc(sizeof(binary_tree_t));

	if (new_n == NULL)
		return (NULL);

	new_n->n = value;
	new_n->parent = parent;
	new_n->left = NULL;
	new_n->right = NULL;

	return (new_n);
}
