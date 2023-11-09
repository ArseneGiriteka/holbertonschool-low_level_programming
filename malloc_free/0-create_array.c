#include "main.h"

/**
 * create_array - function
 *
 * @size: integer value
 *
 * @c: char value
 *
 * Return: a pointer of your choise
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		*(array + i) = c;
		i++;
	}
	return (array);
}
