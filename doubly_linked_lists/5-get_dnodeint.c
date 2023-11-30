#include "lists.h"

/**
 * get_dnodeint_at_index - function
 * @head: list
 * @index: index
 * Return: element at indexth pos
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node, *copy;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	copy = head;
	node = NULL;
	while (copy->prev != NULL)
		copy = copy->prev;

	while (i != index && copy != NULL)
	{
		copy = copy->next;
		i++;
	}

	if (i == index && copy != NULL)
		node = copy;

	return (node);
}
