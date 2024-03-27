#include "binary_trees.h"

unsigned char is_terminal(const binary_tree_t *node);
size_t get_node_depth(const binary_tree_t *root);
const binary_tree_t *find_terminal(const binary_tree_t *root);
int is_perfect_recursive(const binary_tree_t *root,
	size_t terminal_depth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *root);

/**
 * is_terminal - Checks if a node is a terminal node in a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a terminal node, 1, otherwise 0.
 */
unsigned char is_terminal(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * get_node_depth - Returns the depth of a given
 *	node in a binary tree.
 * @root: A pointer to the node to measure the depth of.
 *
 * Return: The depth of the node.
 */
size_t get_node_depth(const binary_tree_t *root)
{
	return (root->parent != NULL ? 1 + get_node_depth(root->parent) : 0);
}

/**
 * find_terminal - Returns a terminal node of a binary tree.
 * @root: A pointer to the root node of the tree to find a terminal node in.
 *
 * Return: A pointer to the first encountered terminal node.
 */
const binary_tree_t *find_terminal(const binary_tree_t *root)
{
	if (is_terminal(root) == 1)
	return (root);
	return (root->left ? find_terminal(root->left) : find_terminal(root->right));
}

/**
 * is_perfect_recursive - Checks if a binary tree is perfect recursively.
 * @root: A pointer to the root node of the tree to check.
 * @terminal_depth: The depth of one terminal node in the binary tree.
 * @level: Level of current node.
 *
 * Return: If the tree is perfect, 1, otherwise 0.
 */
int is_perfect_recursive(const binary_tree_t *root,
	size_t terminal_depth, size_t level)
{
	if (is_terminal(root))
	return (level == terminal_depth ? 1 : 0);
	if (root->left == NULL || root->right == NULL)
	return (0);
	return (is_perfect_recursive(root->left, terminal_depth, level + 1) &&
	is_perfect_recursive(root->right, terminal_depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @root: A pointer to the root node of the tree to check.
 *
 * Return: If root is NULL or not perfect, 0.
 *	Otherwise, 1.
 */
int binary_tree_is_perfect(const binary_tree_t *root)
{
	if (root == NULL)
	return (0);
	return (is_perfect_recursive(root, get_node_depth(find_terminal(root)), 0));
}
