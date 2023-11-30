#include "lists.h"

/**
 * sum_dlistint - function
 * @head: a list
 * Return: an integer
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *copy;
	int sum = 0;

	if (head == NULL)
		return (0);

	copy = head;
	while (copy->prev != NULL)
		copy = copy->prev;

	while (copy != NULL)
	{
		sum += copy->n;
		copy = copy->next;
	}
	return (sum);
}
