#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if full, 0 if not or if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full = 0, right_full = 0;

	if (tree == NULL)
		return (0);

	/* If it's a leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If it has both left and right children */
	if (tree->left && tree->right)
	{
		left_full = binary_tree_is_full(tree->left);

		right_full = binary_tree_is_full(tree->right);

		return (left_full && right_full);
	}

	/* If it has only one child => not full */
	return (0);
}
