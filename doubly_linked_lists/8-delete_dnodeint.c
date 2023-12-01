#include "lists.h"

dlistint_t *get_node(dlistint_t *, unsigned int);
/**
 * delete_dnodeint_at_index - function
 * @head: list
 * @index: index
 * Return: integer
 */
int delete_dnodeint_at_index(dlistint_t **head,
		unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int count = 0;

	if (head == NULL)
		return (-1);

	*head = get_node(*head, index);

	if (count == index && (*head) != NULL)
	{
		if ((*head)->prev != NULL)
		{
			((*head)->prev)->next = (*head)->next;
			if ((*head)->next != NULL)
				((*head)->next)->prev = ((*head)->prev);
			tmp = *head;
			*head = (*head)->prev;
		}
		else if ((*head)->next != NULL)
		{
			((*head)->next)->prev = (*head)->prev;
			if ((*head)->prev != NULL)
				((*head)->prev)->next = (*head)->next;
			tmp = *head;
			*head = (*head)->next;
		}
		else if (((*head)->prev == NULL) && ((*head)->next == NULL))
		{
			free(*head);
			*head = NULL;
		}
		if (tmp != NULL)
		{
			free(tmp);
			tmp = NULL;
		}
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
dlistint_t *get_node(dlistint_t *head, unsigned int index)
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
