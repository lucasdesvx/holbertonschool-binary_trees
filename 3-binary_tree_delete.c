#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer
 *
 * Return: to binary_tree_delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
