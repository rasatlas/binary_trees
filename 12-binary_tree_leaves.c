#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree.
 *
 * @tree: a pointer to the root node of the tree to count the number of leaves.
 *
 * Return: number of leaves in a binary tree. If tree is NULL, return 0.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);
		else
			return (binary_tree_leaves(tree->left) +
					binary_tree_leaves(tree->right));
	}
	return (0);
}
