#include "main.h"
/**
 * _strchr - function
 *
 * @s: a string value
 *
 * @c: a character value
 *
 * Return: a pointer to a char value
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			break;
		}
		i++;
	}

	return (s + i);
}
