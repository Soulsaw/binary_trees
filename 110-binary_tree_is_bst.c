#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_util - Utility function to check BST property recursively
 * @tree: Pointer to the root node of the tree
 * @min: Pointer to the minimum allowed value for the current node
 * @max: Pointer to the maximum allowed value for the current node
 *
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int binary_util(const binary_tree_t *tree, const int *min, const int *max)
{
	if (tree == NULL)
		return (1);
	if ((min && tree->n <= *min) || (max && tree->n >= *max))
		return (0);
	return (binary_util(tree->left, min, &(tree->n)) &&
		binary_util(tree->right, &(tree->n), max));
}
/**
 * binary_tree_is_bst - Checks if a binary tree is a valid BST
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_util(tree, NULL, NULL));
}
