#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node
 * Return: Height or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (1 + (left > right ? left : right));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node
 * Return: Balance factor, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int count = 0;
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	count = (int)(left_h - right_h);

	return (count);
}

