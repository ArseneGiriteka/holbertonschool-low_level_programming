#include "main.h"

/**
 * _strncpy - to copy
 *
 * @dest: string
 *
 * @src: source
 *
 * @n: bytes to copy
 *
 * Return: a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, length = 0;

	while (*(src + length))
	{
		length++;
	}

	while (*(src + i) && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	i = 0;

	while ((length + i) < n)
	{
		*(dest + (length + i)) = '\0';
		i++;
	}

	return (dest);
}
