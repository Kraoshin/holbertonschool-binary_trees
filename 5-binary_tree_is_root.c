#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is a root
 *
 * @node: pointer to the node we're checking
 *
 * Return: 0 if not a node 1 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);

	return (0);
}
