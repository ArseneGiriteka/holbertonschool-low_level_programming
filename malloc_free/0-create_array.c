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

	array = malloc(sizeof(char) * (size + 1));

	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		*(array + i) = c;
		i++;
	}
	*(array + i) = '\0';

	return (array);
}
