#include "binary_trees.h"

/**
 *binary_tree_depth - measures the depth of a node in a binary tree
 *
 *@tree: pointer of the binary tree
 *Return: size_t 
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int d_node = 0;

	if (!tree || !tree->parent)
		return (0);

	d_node = binary_tree_depth(tree->parent);
	return (d_node + 1);
}
