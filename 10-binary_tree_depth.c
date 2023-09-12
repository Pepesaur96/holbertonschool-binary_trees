#include "binary_trees.h"
/**
 *binary_tree_depth - measure the depth of a binary tree
 *@tree: pointer to the parent node
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
