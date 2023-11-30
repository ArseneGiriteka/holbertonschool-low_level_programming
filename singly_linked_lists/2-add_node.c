#include "lists.h"

unsigned int _strlen(const char *);
/**
 * add_node - function that add a node on begining
 * @head: adress of list
 * @str: string value
 * Return: the head of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL) {
		free(new_node);
		return (NULL);
	}
	
	new_node->len = _strlen(str);
	
	if (head != NULL)
		new_node->next = *head;
	else
		new_node->next = NULL;

	*head = new_node;

	return (*head);
}

/**
 * _strlen - compute length of @str
 * @str: a string value
 * Return: unigned int
 */
unsigned int _strlen(const char *str)
{
	unsigned int i = 0;

	if (str == NULL)
		return (i);

	while (*(str + i))
		i++;

	return (i);
}
