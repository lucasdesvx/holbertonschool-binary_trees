#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer
 * @value: variabble
 *
 * Return: to binary_tree_node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nouveau_noeud;

	nouveau_noeud = malloc(sizeof(binary_tree_t));
	if (nouveau_noeud == NULL)
		return (NULL);

	nouveau_noeud->n = value;
	nouveau_noeud->parent = parent;
	nouveau_noeud->left = NULL;
	nouveau_noeud->right = NULL;

	return (nouveau_noeud);
}
