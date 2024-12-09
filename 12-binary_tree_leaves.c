#include "binary_trees.h"

/**
 * binary_tree_leaves - count the number of leaves from tree
 *
 * @tree: pointer to a specific node
 *
 * Return: the number of leaves, 0 otherwise
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_r = 0, leaf_l = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	leaf_l = binary_tree_leaves(tree->left);
	leaf_r = binary_tree_leaves(tree->right);

	return (leaf_l + leaf_r);
}
