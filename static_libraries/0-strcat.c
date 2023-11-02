#include "main.h"

/**
 * _strcat - function
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	unsigned int i = 0, length = 0;

	while (*(dest + length))
	{
		length++;
	}

	while (*(src + i))
	{
		*(dest + length + i) = *(src + i);
		i++;
	}

	return (dest);
}
