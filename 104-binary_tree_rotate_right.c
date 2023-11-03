#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_rotate_right - This function performs a right-rotation
 * on a binary tree
 * @tree:  is a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *r_rotate = NULL, *right = NULL;

	if (!tree)
		return (NULL);
	r_rotate = tree->left;
	r_rotate->parent = NULL;
	if (tree->left->right)
		right = tree->left->right;
	r_rotate->right = tree;
	tree->left = right;
	if (right)
		right->parent = tree;
	tree->parent = r_rotate;
	return (r_rotate);
}
