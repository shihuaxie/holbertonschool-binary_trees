#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree
 * using post-order traversal
 * @tree: pointer to the parent node
 * @func: pointer to a func that print numbers
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* post-order traversal: left right root */
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
