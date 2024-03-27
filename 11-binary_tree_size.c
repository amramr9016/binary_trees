#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @root: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *root)
{
	size_t size = 0;

	if (root)
	{
	size += 1;
	size += binary_tree_size(root->left);
	size += binary_tree_size(root->right);
	}
	return (size);
}
