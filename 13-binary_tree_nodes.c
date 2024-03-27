#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @root: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If root is NULL, the function must return 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *root)
{
	size_t num_nodes = 0;

	if (root)
	{
	num_nodes += (root->left || root->right) ? 1 : 0;
	num_nodes += binary_tree_nodes(root->left);
	num_nodes += binary_tree_nodes(root->right);
	}
	return (num_nodes);
}
