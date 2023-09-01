#include "binary_trees.h"

/**
 * is_full_recursive - Checks if a binary tree is full recursively.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is not full, 0. Otherwise, 1.
 */

int is_full_recursive(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left && !tree->right) ||
				(!tree->lef && tree->right) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - a function that checks if a binary tree is full.
 *
 * @tree: a pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or is not full - 0. Otherwise - 1.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
		return (is_full_recursive(tree));
	return (0);
}
