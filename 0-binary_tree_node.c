#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - This function create a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 *
 * Return: a pointer to the new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	root = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!root)
		return (NULL);
	root->n = value;
	root->left = NULL;
	root->right = NULL;

	root->parent = parent;
	return (root);
}
