#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as the
 * left-child of another node.
 *
 * @parent: a pointer to the node to insert the left-child in.
 * @value: the value to store in the new node.
 *
 * Return: a pointer to the created node, or
 * NULL on failure or if a parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (node && parent != NULL)
	{
		node->n = value;
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
		/* If parent already has a left-child, the new node must take its */
		/* place, and the old left-child must be set as the left-child of */
		/* the new node. */
		if (!parent->left)
		{
			parent->left = node;
		}
		else
		{
			node->left = parent->left;
			parent->left->parent = node;
			parent->left = node;
		}
		return (node);
	}
	return (NULL);
}
