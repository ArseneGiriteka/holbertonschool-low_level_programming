#include "lists.h"

/**
 * free_dlistint - function
 * @head: list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *copy;

	if (head == NULL)
	{
		return;
	}

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		copy = head;
		head = head->next;
		free(copy);
	}
	return;
}
