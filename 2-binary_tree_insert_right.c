#include "binary_trees.h"
/**
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *add_node;

	if (parent == NULL || value == '\0')
		return (NULL);

	add_node = malloc(sizeof(binary_tree_t));

	if (add_node == NULL)
		return (NULL);

	add_node->n = value;
	add_node->parent = parent;
	add_node->left = NULL;
	add_node->right = parent->right;

	if (parent->right != NULL)
	{
		parent->right->parent = add_node;
		add_node->right = add_node;
	}
	parent->left = add_node;

	return (add_node);
}
