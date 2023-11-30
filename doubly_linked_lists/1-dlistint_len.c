#include "lists.h"

/**
 * dlistint_len - function
 * @h: list
 * Return: the size of @h
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *tmp;

	if (h == NULL)
		return (0);

	tmp = h;
	while (tmp->prev != NULL)
		tmp = tmp->prev;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
