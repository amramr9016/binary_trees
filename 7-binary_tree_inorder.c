#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal.
 * @root: A pointer to the root node of the tree to traverse.
 * @action: A pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *root, void (*action)(int))
{
	if (root && action)
	{
	binary_tree_inorder(root->left, action);
	action(root->n);
	binary_tree_inorder(root->right, action);
	}
}
