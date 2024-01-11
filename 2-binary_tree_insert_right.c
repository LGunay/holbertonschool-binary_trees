#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_insert_right - Creates new node for binary tree.
 * @parent: Parent of the new node. If null new node is the parent.
 * @value: Value of new node.
 * Return: Pointer to the new node. On failure NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->parent = parent;
	if (parent->right)
	{
		parent->right->parent = node;
		node->right = parent->right;
	}
	else
		node->right = NULL;
	parent->right = node;
	return (node);
}
