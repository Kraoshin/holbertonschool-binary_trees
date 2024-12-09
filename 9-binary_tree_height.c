#include "binary_trees.h"

/**
 * binary_tree_height - function that returns the height of a tree
 *
 * @tree: pointer to the root
 *
 * Return: the height of the tree, 0 otherwise
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 1, h_right = 1;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if (h_left >= h_right)
		return (h_left);
	else
		return (h_right);
}
