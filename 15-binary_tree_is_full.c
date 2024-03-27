#include "binary_trees.h"

/**
 * is_full_recursive - Checks if a binary tree is full recursively.
 * @root: A pointer to the root node of the tree to check.
 *
 * Return: If root is not full, 0.
 *	Otherwise, 1.
 */
int is_full_recursive(const binary_tree_t *root)
{
	if (root != NULL)
	{
	if ((root->left != NULL && root->right == NULL) ||
	(root->left == NULL && root->right != NULL) ||
	is_full_recursive(root->left) == 0 ||
	is_full_recursive(root->right) == 0)
	return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @root: A pointer to the root node of the tree to check.
 *
 * Return: If root is NULL or is not full - 0.
 *	Otherwise - 1.
 */
int binary_tree_is_full(const binary_tree_t *root)
{
	if (root == NULL)
	return (0);
	return (is_full_recursive(root));
}
