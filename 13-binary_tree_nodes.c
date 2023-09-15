#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node
 * Return: 0 if pointer NULL, # of nodes otherwise
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		count++;

	count = count + binary_tree_nodes(tree->left);
	count = count + binary_tree_nodes(tree->right);

	return (count);
}
