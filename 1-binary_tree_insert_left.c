#include "binary_trees.h"
/**
 * binary_tree_insert_left - Add a new right node
 * @parent: Parent ptr
 * @value: Value node
 * Return: Ptr
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *add_node;

	if (parent == NULL)
		return (NULL);

	add_node = malloc(sizeof(binary_tree_t));

	if (add_node == NULL)
	{	return (NULL);

	}
	add_node->n = value;
	add_node->parent = parent;
	add_node->left = parent->left;
	add_node->right = NULL;

	if (parent->left != NULL)
		add_node->left->parent = add_node;

	parent->left = add_node;

	return (add_node);
}
