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
	size_t count;
	size_t count_right;
	size_t count_left;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
	{
		count_right = binary_tree_nodes(tree->right);
		count_left = binary_tree_nodes(tree->left);
		count = count_right + count_left + 1;
		return (count);
	}
	return (0);
}
