#include "main.h"
#include <stdio.h>

/**
 * _strstr - function
 *
 * @haystack: a set of characters
 *
 * @needle: a set of characters
 *
 * Return: a string value
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, position = 0, j = 0;

	while (*(haystack + i))
	{
		j = 0;
		
		position = i;
		
		while (*(haystack + i) == *(needle + j))
		{
			j++;
			i++;
		}

		if (*(needle + j) == '\0')
		{
			return (haystack + position);
		}

		i++;
	}
	return (NULL);
}
