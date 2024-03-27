#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @mother: A pointer to the parent of the node to create.
 * @val: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *	Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *mother, int val)
{
	binary_tree_t *brand_new;

	brand_new = malloc(sizeof(binary_tree_t));
	if (brand_new == NULL)
	return (NULL);

	brand_new->n = val;
	brand_new->parent = mother;
	brand_new->left = NULL;
	brand_new->right = NULL;

	return (brand_new);
}
