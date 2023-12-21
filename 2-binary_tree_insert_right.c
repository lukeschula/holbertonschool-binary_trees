#include "binary_trees.h"
/**
 * binary_tree_insert_right - Add a new right node
 * @parent: Parent ptr
 * @value: Value node
 * Return: Ptr
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *add_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	add_node = malloc(sizeof(binary_tree_t));

	if (add_node == NULL)
	{
		return (NULL);
	}

	add_node->n = value;
	add_node->parent = parent;
	add_node->left = NULL;
	add_node->right = parent->right;

	if (!(parent->right))
		parent->right = add_node;

	else
	{
		add_node->right = parent->right;
		parent->right->parent = add_node;
		parent->right = add_node;
	}


	return (add_node);
}
