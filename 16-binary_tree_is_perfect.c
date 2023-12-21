#include "binary_trees.h"
/**
 * binary_tree_size - measuring the size of a binary tree
 * @tree: pointer to root
 * Return: Tamaño del arbol o 0 si el arbol es NULL
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
		return (0);

	node = (binary_tree_size(tree->left) + binary_tree_size(tree->right)) + 1;

	return (node);
}
/**
 * binary_tree_is_perfect - checks if the tree is perfect
 *
 * @tree: pointer to root
 * Return: 0 is not perfect, 1 is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_node = 0;
	int right_node = 0;

	if (!tree)
		return (0);

	left_node = binary_tree_size(tree->left);
	right_node = binary_tree_size(tree->right);

	if (left_node == right_node)
		return (1);

	return (0);
}
