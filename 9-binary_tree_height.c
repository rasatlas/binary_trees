#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a binary tree.
 *
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: returns height of the binary tree. If tree is NULL, return 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_height = 0;
		size_t right_height = 0;

		/* Find the height of left, right subtrees */
		/* 1 is added to compensate for the parent node edge */
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		/* Find max of left and right subtrees to get the height of the tree */
		return (left_height > right_height ? left_height : right_height);
	}
	return (0);
}
