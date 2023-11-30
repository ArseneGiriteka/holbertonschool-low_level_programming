#include "lists.h"

/**
 * free_list - function to free a list
 * @head: a list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *copy;

	copy = head;
	while (head != NULL)
	{
		head = head->next;
		free(copy->str);
		free(copy);
		copy = head;
	}
}
