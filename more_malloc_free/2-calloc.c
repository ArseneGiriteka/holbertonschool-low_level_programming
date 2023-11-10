#include "main.h"

/**
 * _calloc - function
 * @nmemb: integer value
 * @size: integer
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		*(array + i) = 0;

	return (array);
}
