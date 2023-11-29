#include "lists.h"

unsigned int _strlen(const char *);
/**
 * add_node - function that add a node on begining
 * @head: adress of list
 * @str: string value
 * Return: the head of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *copy;
	
	copy = malloc(sizeof(list_t));
	copy->str = strdup(str);
	copy->len = _strlen(str);
	copy->next = *head;
	*head = copy;
	return (*(head + 0));
}

/**
 * _strlen - compute length of @str
 * @str: a string value
 * Return: unigned int
 */
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	if (str == NULL)
		return (i);

	while (*(str + i))
		i++;

	return (i);
}
