#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_rotate_left - This function performs a left-rotation
 * on a binary tree
 * @tree:  is a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *rotate = NULL, *left = NULL;

	if (!tree)
		return (NULL);
	rotate = tree->right;
	rotate->parent = NULL;
	if (tree->right->left)
		left = tree->right->left;
	rotate->left = tree;
	tree->right = left;
	if (left)
		left->parent = tree;
	tree->parent = rotate;
	return (rotate);
}
