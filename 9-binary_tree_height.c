#include "binary_trees.h"
/**
 *
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
		height_r = 1 + binary_tree_height(tree->right);
	if (tree->left)
		height_l = 1 + binary_tree_height(tree->left);

	if (height_r < height_l)
		return (height_l);
	
	return (height_r);
}
