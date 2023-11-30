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
	tmp->n = (int) n;
	tmp->prev = NULL;

	if (head != NULL)
		tmp->next = *head;
	else
		tmp->next = NULL;

	*head = tmp;

	return (*head);
}
