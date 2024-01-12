#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
/**
 * binary_tree_is_perfect - checked perfect
 *
 * @tree: binary tree
 *
 * Return: count of leaves of tree
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t leaves;

	if (!tree)
		return (0);
	if (!tree->parent)
		return (1);
	if (binary_tree_height(tree->left) || binary_tree_height(tree->right))
	{
		if (binary_tree_height(tree->left) - binary_tree_height(tree->right) == 0 ||
				leaves == 2 << binary_tree_height(tree))
			return (1);
		else
			return (0);
	}
	return (0);
}
