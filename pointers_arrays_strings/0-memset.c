#include "main.h"
#include <stdio.h>
/**
 * _memset - function
 *
 * @s: a string
 *
 * @b: a byte
 *
 * @n: number of first bytes to fill
 *
 * Return: a string value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (*(s + i) && (i < n))
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
