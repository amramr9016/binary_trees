#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @root: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *root)
{
	size_t num_leaves = 0;

	if (root)
	{
	num_leaves += (!root->left && !root->right) ? 1 : 0;
	num_leaves += binary_tree_leaves(root->left);
	num_leaves += binary_tree_leaves(root->right);
	}
	return (num_leaves);
}
