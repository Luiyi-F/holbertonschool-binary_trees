#include "binary_trees.h"

/**
 *binary_tree_height - measures the height of a binary tree
 *
 *@tree: pointer to the root node
 *Return: 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int h_left = 0, h_right = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if (h_left > h_right)
		return (h_left + 1);
	else
		return (h_right + 1);
}

/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *
 *@tree: pointer of the binary tree
 *Return: balance of the nodes
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left = 0, h_right = 0;

	if (!tree)
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	return (h_left - h_right);
}
