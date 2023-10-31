#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - This function that inserts a node as the
 * left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to put in the new node
 *
 * Return: a pointer to the new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	/**
	 * root = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	 * if (!root)
	 *	return (NULL);
	 * root->n = value;
	 * root->parent = parent;
	 * root->left = NULL;
	 * root->right = NULL;
	 */
	 root = binary_tree_node(parent, value);

	if (!parent)
		return (NULL);
	if (parent->left)
	{
		root->left = parent->left;
		parent->left->parent = root;
	}
	parent->left = root;

	return (root);
}
