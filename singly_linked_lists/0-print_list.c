#include "lists.h"

char *_strdup(const char *);
size_t show_list(const list_t *, const list_t *);
size_t _depth(const list_t *);
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

	if (h->str != NULL)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
	show_list(h->next, h);

	size = _depth(h);
	printf("-> %lu elements", size);

	return (size);
}

/**
 * _strdup - diplicates @str
 * @str: string value
 * Return: duplicate @string
 */
char *_strdup(const char *str)
{
	char *copy;
	int i = 0;

	while (*(str + i))
		i++;

	copy = malloc(sizeof(char) * (i + 1));
	if (copy == NULL)
		return (copy);

	*(copy + i) = '\0';
	i--;
	while (i >= 0)
	{
		*(copy + i) = *(str + i);
		i--;
	}
	return (copy);
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
/**
 * _depth - a function that count nodes of @list
 * @list: a list
 * Return: number of @list's nodes
 */
size_t _depth(const list_t *list)
{
	size_t s = 1;
	list_t *copy;

	if (list->next == list)
		return (1);

	copy = list->next;
	while (copy != NULL)
	{
		s++;
		copy = copy->next;
		if (copy == NULL || copy == list)
			return (s);
	}

	return (s);

}
