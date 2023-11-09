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

	copy = malloc(sizeof(str));

	if (copy == NULL)
		return (NULL);

	if (sizeof(copy) != sizeof(str))
		return (NULL);

	while (*(str + i) || *(str + 1) == '\0')
	{
		*(copy + i) = *(str + i);
		i++;
	}

	return (copy);
}
