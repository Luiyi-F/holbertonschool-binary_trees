#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 *@tree: pointer of the binary tree
 *Return: size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int left_size = 0, right_size = 0;

	if (!tree)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size +  right_size + 1);
}

/**
 *binary_tree_is_full - checks if a binary tree is full
 *
 *@tree: pointer of the binary tree
 *Return: 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}

/**
 *binary_tree_is_perfect - checks if a binary tree is perfect
 *
 *@tree: pointer of the binary tree
 *Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h_left = 0, h_right = 0;

	if (!tree)
		return (0);

	h_left = binary_tree_size(tree->left);
	h_right = binary_tree_size(tree->right);

	if (binary_tree_is_full(tree) && h_left == h_right)
		return (1);

	return (0);
}
