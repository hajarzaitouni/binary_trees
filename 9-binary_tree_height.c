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

	if (!tree)
		return (0);
	l_subtree = binary_tree_height(tree->left);
	r_subtree = binary_tree_height(tree->right);

	if (l_subtree > r_subtree)
		return (l_subtree + 1);
	return (r_subtree + 1);
}
