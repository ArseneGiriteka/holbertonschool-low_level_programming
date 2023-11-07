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

	while (*(str + i))
	{
		i++;
	}

	copy = malloc(sizeof(char) * (i + 1));

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
