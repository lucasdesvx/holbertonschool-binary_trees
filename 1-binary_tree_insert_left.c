#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer
 * @value: variable
 *
 * Return: to binary_tree_insert_left
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *noeud;

	if (parent == NULL)
		return (NULL);

	noeud = binary_tree_node(parent, value);
	if (noeud == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		noeud->left = parent->left;
		parent->left->parent = noeud;
	}
	parent->left = noeud;

	return (noeud);
}
