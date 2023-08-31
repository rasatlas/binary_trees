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
	if (!tree)
		return;
	/* Delete left sub-tree */
	binary_tree_delete(tree->left);
	/* Delete right sub-tree */
	binary_tree_delete(tree->right);
	/* At last, delete root node */
	free(tree);
}
