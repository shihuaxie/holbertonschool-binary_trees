#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Size (total number of nodes), or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	/* size(tree) = 1 + size(tree->left) + size(tree->right)*/
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
