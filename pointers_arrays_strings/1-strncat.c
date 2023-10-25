#include "main.h"

/**
 * _strncat - function
 *
 * @dest: string parameter
 *
 * @src: source
 *
 * @n: max byte to append
 *
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, length = 0;

	while (*(dest + length))
	{
		length++;
	}

	while (*(src + i) && i < n)
	{
		*(dest + length + i) = *(src + i);
		i++;
	}

	if (i != 0)
		*(dest + length + i) = '\0';

	return (dest);
}
