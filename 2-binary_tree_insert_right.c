#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer
 * @value: variable
 *
 * Return: to binary_tree_insert_right
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *noeud;

	if (parent == NULL)
		return (NULL);

	noeud = binary_tree_node(parent, value);
	if (noeud == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		noeud->right = parent->right;
		parent->right->parent = noeud;
	}
	parent->right = noeud;

	return (noeud);
}
