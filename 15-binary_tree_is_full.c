#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_leaves - A function that counts the leaves in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of leaves
 * Return: 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_left;
	size_t count_right;
	size_t count;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	count_left = binary_tree_leaves(tree->left);
	count_right = binary_tree_leaves(tree->right);
	count = count_left + count_right;
	return (count);
}
/**
 * binary_tree_is_full - This  function that checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int leaves;

	if (!tree)
		return (0);
	leaves = binary_tree_leaves(tree);
	if (leaves % 2 == 0)
		return (1);
	return (0);
}
