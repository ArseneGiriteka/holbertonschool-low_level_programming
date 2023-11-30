#include "lists.h"

unsigned int _strlen(const char *);
/**
 * add_node_end - function
 * @head: a list
 * @str: a string
 * Return: the last node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *copy;
	list_t *tmp;

	copy = malloc(sizeof(list_t));
	if (copy == NULL)
		return (NULL);

	copy->str = strdup(str);
	if (copy->str == NULL)
	{
		free(copy);
		return (NULL);
	}
	copy->len = _strlen(str);
	copy->next = NULL;

	if (*head == NULL)
	{
		*head = copy;
	}
	else
	{
		tmp = (*head);
		while ((tmp->next) != *head && (tmp->next) != NULL)
		{
			tmp = tmp->next;
		}

		tmp->next = copy;
	}
	return (copy);
}

/**
 * _strlen - function
 * @str: string
 * Return: unsigned int
 */
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	if (str == NULL)
		return (0);

	while (*(str + i))
		i++;

	return (i);
}
