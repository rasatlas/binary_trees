#include "binary_trees.h"

/**
* binary_tree_node - A function that creates a binary tree node.
*
* @parent: a pointer to the parent node of the node to create.
* @value: value to pyt in the new parent node.
*
* Return: a pointer to the new node, or NULL on failure.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	root = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (root)
	{
		root->n = value;
		root->parent = parent;
		root->left = NULL;
		root->right = NULL;
		return (root);
	}
	return (NULL);
}
