#include "binary_trees.h"

/**
 * binary_tree_sibling - function to find sibling tree
 * @node: pointer to the node
 * Return: pointer to the sibling node or NULL if nothing
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (!node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (NULL);
}
