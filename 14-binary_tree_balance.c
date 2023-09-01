#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - a function that measures the balance factor
 * of a binary tree.
 *
 * @tree: a pointer to the root node of the tree to measure the balance factor.
 *
 * Return: balance factor. If tree is NULL, return 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_height = binary_tree_height(tree->left);
		size_t right_height = binary_tree_height(tree->right);

		return ((int)(left_height - right_height));
	}
	return (0);
}
