#include "binary_trees.h"

/**
 * binary_tree_height_b - Mesure la hauteur d'un arbre binaire
 * pour le calcul du balance factor
 * @tree: Pointeur vers le nœud racine
 * Return: La hauteur, sinon 0 si NULL
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height_b(tree->left);
	right_h = binary_tree_height_b(tree->right);

	if (left_h > right_h)
		return (left_h + 1);
	return (right_h + 1);
}

/**
 * binary_tree_balance - Mesure le facteur d'équilibre d'un arbre binaire
 * @tree: Pointeur vers le nœud racine
 * Return: Facteur d'équilibre, sinon 0 si tree est NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0;
	int right_h = 0;

	if (tree == NULL)
		return (0);

	/* On convertit en int car la hauteur peut être grande */
	left_h = (int)binary_tree_height_b(tree->left);
	right_h = (int)binary_tree_height_b(tree->right);

	return (left_h - right_h);
}
