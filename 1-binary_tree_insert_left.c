#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_insert_left - creates a binary tree node
 * @parent: parent
 * @value: var
 * Return: return
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->right = NULL;
	node->parent = parent;

	if (parent->left)
	{
		parent->left->parent = node;
		node->left = parent->left;
	}
	else
	{
		node->left = NULL;
	}
	parent->left = node;
	return (node);
}
