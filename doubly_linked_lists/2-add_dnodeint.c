#include "lists.h"

/**
 * add_dnodeint - function
 * @head: list
 * @n: data
 * Return: the element added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;

	*head = tmp;

	return (*head);
}
