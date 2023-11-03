#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * pop_queue - This function permit to pop the top queue element
 * @queue: Is a pointer to pointer to the first element
 * Return: Nothing
 */
void pop_queue(queue_t **queue)
{
	queue_t *top = *queue;

	if (*queue)
	{
		*queue = (*queue)->next;
		free(top);
	}
}
/**
 * insert_queue - This function permet to insert element in the queue
 * @queue: The pointer to pointer to the top element
 * @tree: The binary tree to insert
 * Return: Nothing
 */
void insert_queue(queue_t **queue, const binary_tree_t *tree)
{
	queue_t *top = *queue, *new;

	new = (queue_t *)malloc(sizeof(queue_t));
	if (!new)
		return;
	new->tree = tree;
	new->next = NULL;

	if (!top)
		*queue = new;
	else
	{
		while (top->next)
		{
			top = top->next;
		}
		top->next = new;
	}
}
/**
 * binary_tree_levelorder - A function that goes through a binary tree using
 * level-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	queue_t *queue = NULL;

	if (!tree || !func)
		return;
	insert_queue(&queue, tree);
	while (queue)
	{
		func(queue->tree->n);
		if (queue->tree->left)
			insert_queue(&queue, queue->tree->left);
		if (queue->tree->right)
			insert_queue(&queue, queue->tree->right);
		pop_queue(&queue);
	}
}
