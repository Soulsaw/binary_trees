#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * max - This function return the max of two number
 * @n: The first integer
 * @m: The second integer
 * Return: The max of these two value
 */
size_t max(size_t n, size_t m)
{
	return (n ? m : n);
}
/**
 * binary_tree_height - This function that measures the height of a
 * binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: 0 or the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (max(binary_tree_height(tree->left),
		binary_tree_height(tree->right)) + 1);
}
