#include "binary_trees.h"
/**
 * binary_tree_is_full - function
 * description - function that checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: = 1 if the tree is full or 0 if the tree is not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (-1);
	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));

	return (0);
}
