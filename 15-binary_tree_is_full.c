#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if full 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_subtree, right_subtree;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left_subtree = binary_tree_is_full(tree->left);
	right_subtree = binary_tree_is_full(tree->right);

	if (left_subtree == 1 && right_subtree == 1)
		return (1);
	return (0);
}
