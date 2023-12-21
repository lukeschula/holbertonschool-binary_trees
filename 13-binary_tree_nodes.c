#include "binary_trees.h"
/**
 *
 */
int binary_tree_leaf(const binary_tree_t *next_node)
{
	if (next_node == NULL)
	{
		return (0);
	}

	if (next_node != NULL && !next_node->left && !next_node->right)
	{
		return (1);
	}

	return (0);
}
/**
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t r = 0;
	size_t l = 0;

	if (!tree)
	{
		return (0);
	}
	l = binary_tree_nodes(tree->left);
	r = binary_tree_nodes(tree->right);

	if (l < r)
	{
		return (1 + r);
	}
	return (1 + l);
}
/**
 *
 */
int binary_tree_adjust(const binary_tree_t *bin_t)
{
	int r_countr = 0;
	int l_countr = 0;

	if (!bin_t)
		return (0);
	l_countr = binary_tree_nodes(bin_t->left);
	r_countr = binary_tree_nodes(bin_t->right);

	return (l_countr - r_countr);
}
