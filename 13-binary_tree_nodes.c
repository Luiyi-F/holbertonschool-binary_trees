#include "binary_trees.h"

/**
 *binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 *@tree: pointer of the binary tree
 *Return: number of the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		count++;

	return (count);
}
