#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function
 *
 * @s: a string value
 *
 * @accept: a set of characters
 *
 * Return: a string value
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
			j++;
		}
		i++;
	}

	if (*(s + i) == '\0')
	{
		return (s + i);
	}

	return (NULL);
}
