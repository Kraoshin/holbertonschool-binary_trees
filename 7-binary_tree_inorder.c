#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a list in order traversal
 *
 * @tree: pointer to the root
 * @func: func pointer that print the current node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	if (!func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
