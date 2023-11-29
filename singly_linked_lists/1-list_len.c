#include "lists.h"

size_t _len(const list_t *, const list_t *);
/**
 * list_len - function to compute length
 * of h
 * @h: a head node of a linked list
 * Return: size of @h
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (size);

	size++;
	size += _len(h->next, h);

	return (size);
}

/**
 * _len - give length of list
 * @list: node
 * @head: header node
 * Return: size of @list
 */
size_t _len(const list_t *list, const list_t *head)
{
	if (list == NULL || list == head)
		return (0);

	return (1 + _len(list->next, head));
}
