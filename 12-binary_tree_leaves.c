#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Number of leaves, or 0 if tree is NULL
 *
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	/* leaf node has noe left or right node */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (count);
}
