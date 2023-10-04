#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: a pointer to the node to measure the depth
 * Return: the depth of a node in B_tree or 0 if NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t edges = 0;

	if (!tree)
		return (0);
	while (tree->parent)
	{
		edges++;
		tree = tree->parent;
	}

	return (edges);
}
