#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 * @h: list
 * @idx: index
 * @n: node's data
 * Return: the node added
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy, *node;
	unsigned int count = 0;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (h == NULL && idx == 0)
	{
		free(node);
		return (add_dnodeint(h, n));
	}

	copy = *h;
	while (copy->prev != NULL)
		copy = copy->prev;

	while (idx != count && copy != NULL)
	{
		copy = copy->next;
		count++;
	}

	if (idx == count && copy != NULL)
	{
		node->next = copy;
		node->prev = copy->prev;
		(copy->prev)->next = node;
		copy->prev = node;
	}
	return (node);
}
