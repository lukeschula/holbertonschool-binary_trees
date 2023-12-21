#include "binary_trees.h"
/**
 *
 *
 */
void transverse(binary_tree_t *delete)
{
	if (delete == NULL)
		return;

	if (delete)
	{
		transverse(delete->left);
		transverse(delete->right);
	}
	free(delete);
}
/**
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	transverse(tree);
}
