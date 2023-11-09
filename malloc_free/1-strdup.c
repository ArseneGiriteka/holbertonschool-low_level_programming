#include "main.h"

/**
 * _strdup - function
 * @str: a point to string
 * Return: a pointer to a string
 */
char *_strdup(char *str)
{
	unsigned int i = 0, size = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	while (*(str + size))
	{
		size++;
	}

	copy = malloc(sizeof(char) * (size + 1));
	if (copy == NULL)
		return (copy);

	i = 0;
	while (*(str + i))
	{
		*(copy + i) = *(str + i);
		i++;
	}
	*(copy + i) = '\0';

	return (copy);
}
