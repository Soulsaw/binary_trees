#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_trees_ancestor - This function finds the lowest common
 * ancestor of two nodes
 * @first: is pointer to the first node
 * @second: is pointer to the second node
 * Return: The lowest common ancestor or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	if (first->parent == second->parent)
		return (first->parent);
	return (binary_trees_ancestor(first->parent, second->parent));
}