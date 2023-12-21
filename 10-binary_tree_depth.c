#include "binary_trees.h"
/**
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		d++;
		tree = tree->parent;
	}
	return (d);
}
