#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree.
 * @root: A pointer to the root node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *root)
{
	if (root != NULL)
	{
	binary_tree_delete(root->left);
	binary_tree_delete(root->right);
	free(root);
	}
}
