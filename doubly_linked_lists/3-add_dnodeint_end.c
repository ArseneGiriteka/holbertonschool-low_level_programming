#include "lists.h"

/**
 * add_dnodeint_end - function
 * @head: list
 * @n: data
 * Return: node added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;
	dlistint_t *copy;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (head == NULL || *head == NULL)
	{
		tmp->prev = NULL;
		*head = tmp;
		return (*head);
	}

	copy = *head;
	while (copy->next != NULL)
	{
		copy = copy->next;
	}

	tmp->prev = copy;
	copy->next = tmp;
	return (tmp);
}
