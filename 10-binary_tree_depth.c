#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node
 * @tree: points to the root of a tree
 * Return: 0 if tree doesn't exist
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
