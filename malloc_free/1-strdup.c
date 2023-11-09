#include "main.h"

/**
 * _strdup - function
 *
 * @str: a string value
 *
 * Return: a string value
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
	{
		i++;
	}

	copy = malloc(sizeof(char) * i);

	if (copy == NULL)
		return (NULL);

	i = 0;

	while (*(str + i))
	{
		*(copy + i) = *(str + i);
		i++;
	}

	*(copy + i) = '\0';

	return (copy);
}
