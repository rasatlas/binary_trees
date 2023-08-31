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
		/* Find the height of left, right subtrees */
		size_t left_height = binary_tree_height(tree->left);
		size_t right_height = binary_tree_height(tree->right);

		/* Find max(subtree_height) + 1 to get the height of the tree */
		return (1 + (left_height > right_height ? left_height : right_height));
	}
	return (0);
}
