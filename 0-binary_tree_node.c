#include "binary_trees.h"

/**
 * binary_tree_node - that creates a binary tree node
 * @parent: Ptr the root
 * @value: the new node
 * Return: a pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *add_node;

	add_node = malloc(sizeof(binary_tree_t));

	if (!add_node)
		return (NULL);

	add_node->parent = parent;
	add_node->n = value;
	add_node->left = NULL;
	add_node->right = NULL;

	return (add_node);
}
