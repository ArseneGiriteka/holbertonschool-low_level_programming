#include "lists.h"

/**
 * delete_dnodeint_at_index - function
 * @head: list
 * @index: index
 * Return: integer
 */
int delete_dnodeint_at_index(dlistint_t **head,
		unsigned int index)
{
	dlistint_t *copy = NULL;
	unsigned int i = 0;

	if ((head == NULL) || ((*head) == NULL))
		return (-1);

	while ((*head)->prev != NULL)
		*head = (*head)->prev;

	copy = *head;
	for (i = 0; (i <= index && copy != NULL); i++)
		copy = copy->next;
	
	if (copy == NULL)
		return (-1);

	if (copy->prev != NULL)
		(copy->prev)->next = copy->next;
	else
		*head = copy->next;

	if (copy->next != NULL)
		copy->next->prev = copy->prev;

	free(copy);
	return (1);
}
