#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Function that deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 * Return: void
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* if tree is NULL*/
	if (tree == NULL)
		return;
	/* post-order traversal to delete: left-right-root*/
	binary_tree_delete(tree->left);

	binary_tree_delete(tree->right);

	free(tree);
}
