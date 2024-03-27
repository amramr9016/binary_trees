#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal.
 * @root: A pointer to the root node of the tree to traverse.
 * @action: A pointer to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *root, void (*action)(int))
{
	if (root && action)
	{
	action(root->n);
	binary_tree_preorder(root->left, action);
	binary_tree_preorder(root->right, action);
	}
}
