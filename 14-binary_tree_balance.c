#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree
 * Return: the height of a binary tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_subtree, r_subtree;

	if (!tree)
		return (0);
	l_subtree = binary_tree_height(tree->left);
	r_subtree = binary_tree_height(tree->right);
	if (l_subtree > r_subtree)
		return (l_subtree + 1);
	return (r_subtree + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: a pointer to the root node of the tree
 * Return: the balance factor value or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (left_height - right_height);
}
