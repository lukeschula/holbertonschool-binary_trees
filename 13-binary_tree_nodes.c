#include "binary_trees.h"
/**
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right_nodes, left_nodes;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_nodes= binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	return (left_nodes + right_nodes + 1);
}
