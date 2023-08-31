#include "binary_trees.h"

/**
 * binary_tree_delete - a function that deletes an entire binary tree.
 *
 * @tree: a pointer to the root node of the tree to delete.
 *
 * If tree is NULL, do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		free(tree->left);
		free(tree->right);
		free(tree);
	}
}
