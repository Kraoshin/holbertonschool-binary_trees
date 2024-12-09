#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with 1 child
 * @tree: pointer to the root node
 * Return: number of nodes, or 0 otherwise
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t parent_left = 0;
	size_t parent_right = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	parent_left = binary_tree_nodes(tree->left);
	parent_right = binary_tree_nodes(tree->right);

	return (parent_left + parent_right + 1);
}
