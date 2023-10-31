#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - This function check if the node is a leaf
 *
 * @node: is a pointer to the node to check
 * Return: 0 or 1
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->parent && !node->left && !node->right)
		return (1);
	return (0);
}
