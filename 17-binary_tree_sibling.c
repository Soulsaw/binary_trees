#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * is_left_or_right_child - This function check if child is right or left
 * @tree: The tree to check
 * Return: 0 if left 1 if right or -1
 */
int is_left_or_right_child(const binary_tree_t *tree)
{
	if (tree->parent->left == tree)
		return (0);
	if (tree->parent->right == tree)
		return (1);
	return (-1);
}
/**
 * binary_tree_sibling - This function finds the sibling of a node
 * @node: The node to find it sibling
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int check;

	if (!node || !node->parent)
		return (NULL);
	check = is_left_or_right_child(node);
	if (check == 0)
		if (node->parent->right)
			return (node->parent->right);
	if (check == 1)
		if (node->parent->left)
			return (node->parent->left);
	return (NULL);
}
