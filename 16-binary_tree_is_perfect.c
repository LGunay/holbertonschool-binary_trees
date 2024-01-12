#include "binary_trees.h"

/**
 * binary_tree_perfect - checked perfect
 *
 * @tree: binary tree
 *
 * Return: count of leaves of tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_height(tree->left) || binary_tree_height(tree->right))
	{
		if (binary_tree_height(tree->left) - binary_tree_height(tree->right) == 0)
			return (1);
		else
			return (0);
	}
	return (0);
}
