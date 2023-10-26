#include "main.h"

/**
 * _memcpy - function
 *
 * @dest: a string value
 *
 * @src: string source
 *
 * @n: number of characters to copy
 *
 * Return: a string value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0, src_length = 0;

	while (*(src + src_length))
	{
		src_length++;
	}

	while ((src + (i * sizeof(char))) && (i < n))
	{
		*(dest + i) = *(src + i);
		i++;
	}

	i = 0;

	while (src_length + i <= n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
