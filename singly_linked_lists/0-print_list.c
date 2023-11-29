#include "lists.h"

size_t show_list(const list_t *, const list_t *);
/**
 * print_list - print all elements of @h
 * @h: a list given in parameter
 * Return: the size of h
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);
	size++;
	if (h->str != NULL)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");

	if (h->next != NULL)
		size += show_list(h->next, h);

	printf("-> %lu elements", size);

	return (size);
}

/**
 * show_list - function
 * @head: head node
 * @list: a list to print
 * Return: nothing
 */
size_t show_list(const list_t *list, const list_t *head)
{
	if (list == NULL || list == head)
		return (0);

	if (list->str != NULL)
		printf("[%d] %s\n", list->len, list->str);
	else
		printf("[0] (nil)\n");

	return (1 + show_list(list->next, head));
}
