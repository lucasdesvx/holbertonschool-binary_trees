#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    if (!root)
        return (1);

    printf("Racine = %d\n", root->n);
    free(root);
    return (0);
}
