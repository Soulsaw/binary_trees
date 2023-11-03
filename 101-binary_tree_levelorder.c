#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_preorder - A function that goes through
 * a binary tree using pre-order traversal
 * @tree: The binary tree to traverse
 * @func: The fuction to use
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	queue_t *queue, *old;

	if (tree == NULL || func == NULL)
		return;
	
}
