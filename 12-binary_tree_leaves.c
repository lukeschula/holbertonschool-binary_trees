#include "binary_trees.h"
/**
 *
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave_countr;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);


leave_countr = binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left);
	return (leave_countr);
}
