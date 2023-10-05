#include "binary_trees.h"
#include <limits.h>

/**
 * check_is_bst - checks if B_tree is valid binary serach tree using recursion
 *
 * @tree: a pointer to the root node of the tree to check
 * @min: lowest value of a node
 * @max: largest value of a node
 * Return: 1 if if valid bst, 0, otherwise
 */

int check_is_bst(const binary_tree_t *tree, int min, int max)
{
	int left_subtree, right_subtree;

	if (!tree)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);
	left_subtree = check_is_bst(tree->left, min, tree->n - 1);
	right_subtree = check_is_bst(tree->right, tree->n + 1, max);
	return (left_subtree && right_subtree);
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 *
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if valid BST, 0 otherwise
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (check_is_bst(tree, INT_MIN, INT_MAX));
}
