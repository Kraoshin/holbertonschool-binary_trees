#include "binary_trees.h"

/**
 * binary_tree_size - count the number of nodes starting from *tree
 *
 * @tree: tree is a pointer to the root node of the tree to measure the size
 *
 * Return: the size of the tree, 0 otherwise
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (!tree)
		return (0);

	h_left = binary_tree_size(tree->left);
	h_right = binary_tree_size(tree->right);

		return (h_left + h_right + 1);
}
