#include "binary_trees.h"

/**
 *binary_tree_is_root - return if a node is the root
 *
 *@node: node identifecated
 *Return: 1 if the node is the root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);

	return (0);
}
