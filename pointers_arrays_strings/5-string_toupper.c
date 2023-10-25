#include "main.h"

/**
 * string_toupper - function
 *
 * @s: a string
 *
 * Return: a string value
 */
char *string_toupper(char *s)
{
	unsigned int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) -= ('a' - 'A');
		}
		i++;
	}
	return (s);
}
