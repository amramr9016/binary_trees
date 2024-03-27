#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @root: A pointer to the root node of the tree to measure the height.
 *
 * Return: If root is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *root)
{
	if (root)
	{
	size_t left_height = 0, right_height = 0;

	left_height = root->left ? 1 + binary_tree_height(root->left) : 0;
	right_height = root->right ? 1 + binary_tree_height(root->right) : 0;
	return ((left_height > right_height) ? left_height : right_height);
	}
	return (0);
}
