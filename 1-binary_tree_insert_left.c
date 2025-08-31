#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    /* Allouer de la mémoire pour le nouveau */
    new = malloc(sizeof(binary_tree_t));
    if (new == NULL)
        return (NULL);

    /* Mettre la valeur dans le n*/
    new->n = value;

    /* Lier le parent */
    new->parent = parent;

    /* Pas d'enfants pour le moment */
    new->left = NULL;
    new->right = NULL;

    return (new);
}
