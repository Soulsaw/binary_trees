#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - A function that counts the
 * nodes with at least 1 child in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of nodes
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (1);
	return (binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right));
}
/**
 * binary_tree_is_full - This  function that checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full;

	if (!tree)
		return (0);
	is_full = binary_tree_nodes(tree);
	if (is_full == 0)
		return (1);
	return (0);
}
