#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 *	of another in a binary tree.
 * @father: A pointer to the node to insert the left-child in.
 * @val: The value to store in the new node.
 *
 * Return: If father is NULL or an error occurs - NULL.
 *	Otherwise - a pointer to the new node.
 *
 * Description: If father already has a left-child, the new node
 *	takes its place and the old left-child is set as
 *	the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *father, int val)
{
	binary_tree_t *brand_new;

	if (father == NULL)
	return (NULL);

	brand_new = binary_tree_node(father, val);
	if (brand_new == NULL)
	return (NULL);

	if (father->left != NULL)
	{
	brand_new->left = father->left;
	father->left->parent = brand_new;
	}
	father->left = brand_new;

	return (brand_new);
}
