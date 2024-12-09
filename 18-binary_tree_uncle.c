#include "binary_trees.h"

/**
 * binary_tree_uncle - function to find uncle of the node
 * @node: pointer to the node
 * Return: pointer to uncle or NULL if no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *p, *gp;

	if (!node)
		return (NULL);

	if (!node->parent || !node->parent->parent)
		return (NULL);

	p = node->parent;
	gp = node->parent->parent;

	if (gp->left == p)
		return (gp->right);

	if (gp->right == p)
		return (gp->left);
	else
		return (NULL);
}

