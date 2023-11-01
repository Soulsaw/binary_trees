#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "binary_trees.h"
/**
 * maxx - This function return the max of two number
 * @n: The first integer
 * @m: The second integer
 * Return: The max of these two value
 */
size_t maxx(size_t n, size_t m)
{
	size_t max = n;

	if (n < m)
		max = m;
	return (max);
}
/**
 * binary_tree_is_perfect - This  function that checks if a binary tree
 * is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 0 or 1
 */
 int binary_tree_is_perfect(const binary_tree_t *tree)
 {
	int height, size;

	if (!tree)
		return (0);
	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	if (size == pow(2, height + 1) - 1)
		return (1);
	return (0);
 }