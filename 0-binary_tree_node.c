#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Function that creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: Integer to store in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	/* if failed, return NULL */
	if (node == NULL)
		return (NULL);
	/* otherwise, create & assign value to new node */
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
