#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Pointer to the head of the doubly linked list
 * @index: Index of the node to delete
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}

	if (current == *head)
		*head = (*head)->next;

	if (current->prev != NULL)
		current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
