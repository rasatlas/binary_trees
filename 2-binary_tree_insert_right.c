#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the
 * right-child of another node.
 *
 * @parent: a pointer to the node to insert the right-child in.
 * @value: the value to store in the new node.
 *
 * Return: a pointer to the created node, or
 * NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (node)
	{
		node->n = value;
		node->parent = parent;
		node->right = NULL;
		node->left = NULL;

		if (!parent->right)
		{
			parent->right = node;
		}
		else
		{
			node->right = parent->right;
			node->right->parent = node;
			parent->right = node;
		}
		return (node);
	}
	return (NULL);
}
