#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree
 * Return: the height of tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_subtree, r_subtree;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	l_subtree = binary_tree_height(tree->left);
	r_subtree = binary_tree_height(tree->right);
	if (l_subtree > r_subtree)
		return (l_subtree + 1);
	return (r_subtree + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_subtree, r_subtree;
	int l_height, r_height;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left || !tree->right)
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	l_subtree = binary_tree_is_perfect(tree->left);
	r_subtree = binary_tree_is_perfect(tree->right);

	if (l_height == r_height)
	{
		if (l_subtree && r_subtree)
			return (1);
	}

	return (0);
}
