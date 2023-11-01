#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "binary_trees.h"
/**
 * binary_tree_height - This function that measures the height of a
 * binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: 0 or the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (left_height ? right_height + 1 : left_height + 1);
}
/**
 * binary_tree_size - This function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size.
 * Return: 0 or the height of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size, size;

	if (!tree)
		return (0);
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	size = left_size + right_size + 1;
	return (size);
}
/**
 * binary_tree_is_perfect - This  function that checks if a binary tree
 * is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size, power = 1, i;

	if (!tree)
		return (0);
	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	for (i = 0; i < height + 1; i++)
	{
		power *= 2;
	}
	if (size == power - 1)
		return (1);
	return (0);
}
