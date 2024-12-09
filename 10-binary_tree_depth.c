#include "binary_trees.h"

/**
 * binary_tree_depth - calculate the size of the depth of a node
 *
 * @tree: pointer to a node
 *
 * Return: depth, 0 otherwise
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
