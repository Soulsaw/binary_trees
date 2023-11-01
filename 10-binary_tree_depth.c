#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - This function that measures the depth of a
 * binary tree
 * @tree: is a pointer to the root node of the tree to measure the depth.
 * Return: 0 or the height of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->parent)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
