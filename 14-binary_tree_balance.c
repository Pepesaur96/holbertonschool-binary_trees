#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance facter of a tree
 * @tree: pointer to the root node
 * Return: 0 if tree is NULL, balance factor otherwise
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int left_balance = 0, right_balance = 0;

	if (tree == NULL)
		return (0);

	left_balance = binary_tree_height(tree->left);
	right_balance = binary_tree_height(tree->right);

	return (left_balance - right_balance);
}

/**
 * binary_tree_height - meassures the height of a binary tree
 * @tree: pointer to the root node
 * Return: 0 if tree is null, the height of the left or right side
 * whichever is greater.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height += 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		right_height += 1 + binary_tree_height(tree->right);

	return (left_height > right_height ? left_height : right_height);
}
