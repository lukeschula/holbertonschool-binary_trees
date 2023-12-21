#include "binary_trees.h"
/**
 * binary_tree_leaf - check the leaf
 * @node: passed parent
 * Return: 1 if is leafe 0 otherwise
 *
 */
int binary_tree_leaf(const binary_tree_t *new_node)
{
	if (!new_node)
	{
		return (0);
	}

	if (new_node != NULL && !new_node->left && !new_node->right)
	{
		return (1);
	}

	return (0);
}
/**
 * binary_tree_depth - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	l = binary_tree_depth(tree->left);
	r = binary_tree_depth(tree->right);
	if (l < r)
	{
		return (1 + r);
	}
	return (1 + l);
}
/**
 * binary_tree_balance -  the balance factor
 * @tree: pointer to nod
 * Return: the measure balancer factor of df
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int countr_left = 0;
	int countr_right = 0;

	if (tree == NULL)
		return (0);

	countr_left = binary_tree_depth(tree->left);
	countr_right = binary_tree_depth(tree->right);

	return (countr_left - countr_right);
}
