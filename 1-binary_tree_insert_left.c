#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts a node as the left-child of another node
 *
 *@parent: pointer the current parent node
 *@value: value in the current parent node
 *
 *Return: insert new_node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *last_node;

	if (!parent)
		return (NULL);

	last_node = binary_tree_node(parent, value);

	if (!last_node)
		return (NULL);
	if (parent->left != NULL)
	{
		last_node->left = parent->left;
		last_node->left->parent = last_node;
	}

	parent->left = last_node;
	return (last_node);
}
