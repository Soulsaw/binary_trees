#include <stddef.h>
#include <stdbool.h>
#include "binary_trees.h"
/**
 * binary_tree_is_bst_util - Utility function to check BST property recursively
 * @tree: Pointer to the root node of the tree
 * @prev: Pointer to the previously visited node's value
 *
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst_util(const binary_tree_t *tree, int *prev)
{
	if (tree == NULL)
		return (1);
	if (!binary_tree_is_bst_util(tree->left, prev))
		return (0);
	if (prev != NULL && tree->n <= *prev)
		return (0);
	*prev = tree->n;
	return (binary_tree_is_bst_util(tree->right, prev));
}
/**
 * binary_tree_is_bst - Checks if a binary tree is a valid BST
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int prev = 0;

	return (binary_tree_is_bst_util(tree, &prev));
}
