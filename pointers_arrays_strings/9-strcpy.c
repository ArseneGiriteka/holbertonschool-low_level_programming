#include "main.h"

/**
 * _strcpy - function that copy of a string
 *
 * @dest: string for destination
 *
 * @src: source string
 *
 * Return: retun the pointer to the string dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
