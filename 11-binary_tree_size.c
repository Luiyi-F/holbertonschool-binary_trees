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
