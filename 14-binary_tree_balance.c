#include "binary_trees.h"

/**
 * binary_tree_height - function that returns the height of a tree
 * @tree: pointer to the root
 * Return: the height of the tree, 0 otherwise
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if (h_left >= h_right)
		return (h_left + 1);
	else
		return (h_right + 1);
}

/**
 * binary_tree_balance - function to count the balance left to right
 * @tree: pointer nodes
 * Return: difference balance
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left = 0;
	int h_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		h_left = binary_tree_height(tree->left);

	else
		h_left = -1;

	if (tree->right)
		h_right = binary_tree_height(tree->right);

	else
		h_right = -1;

	return (h_left - h_right);
}
