#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a list in post order traversal
 *
 * @tree: pointer to the root
 * @func: func pointer that print the current node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	if (!func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
