#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *, unsigned int);
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

	if ((head == NULL) || ((*head) == NULL))
		return (-1);
	while ((*head)->prev != NULL)
		*head = (*head)->prev;
	copy = get_dnodeint_at_index(*head, index);
	if (copy != NULL)
	{
		if ((copy->prev == NULL) && (copy->next == NULL))
		{
			*head = NULL;
		}
		else
		{
			if (copy->prev != NULL)
			{
				(copy->prev)->next = copy->next;
				*head = copy->prev;
			}

			if (copy->next != NULL)
			{
				(copy->next)->prev = copy->prev;
				*head = copy->next;
			}
		}
		free(copy);
		copy = NULL;
		return (1);
	}
	return (-1);
}

/**
 * get_node - function
 * @head: list
 * @index: index
 * Return: node
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
