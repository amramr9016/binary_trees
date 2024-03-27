#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child
 *	of another in a binary tree.
 * @mother: A pointer to the node to insert the right-child in.
 * @val: The value to store in the new node.
 *
 * Return: If mother is NULL or an error occurs - NULL.
 *	Otherwise - a pointer to the new node.
 *
 * Description: If mother already has a right-child, the new node
 *	takes its place and the old right-child is set as
 *	the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *mother, int val)
{
	binary_tree_t *brand_new;

	if (mother == NULL)
	return (NULL);

	brand_new = binary_tree_node(mother, val);
	if (brand_new == NULL)
	return (NULL);

	if (mother->right != NULL)
	{
	brand_new->right = mother->right;
	mother->right->parent = brand_new;
	}
	mother->right = brand_new;

	return (brand_new);
}
