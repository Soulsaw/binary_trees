#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - This function that inserts a node as the
 * right-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to put in the new node
 *
 * Return: a pointer to the new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	if (!parent)
		return (NULL);

	root = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!root)
		return (NULL);
	root->n = value;
	root->parent = parent;
	root->left = NULL;
	root->right = NULL;

	if (parent->right)
	{
		root->right = parent->right;
		parent->right->parent = root;
	}
	parent->right = root;

	return (root);
}

