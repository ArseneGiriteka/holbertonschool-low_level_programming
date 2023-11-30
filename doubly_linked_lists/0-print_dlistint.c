#include "lists.h"

/**
 * print_dlistint - print @h
 * @h: list
 * Return: the size of @h
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *tmp;

	tmp = h;
	while (tmp->prev != NULL)
		tmp = tmp->prev;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		size++;
	}
	return (size);
}
