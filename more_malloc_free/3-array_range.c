#include "main.h"

/**
 * array_range - function
 * @min: integer value
 * @max: integer value
 * Return: pointer to array of integer
 */
int *array_range(int min, int max)
{
	unsigned int i = 0;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		*(array + i) = min;
		min++;
	}

	return (array);
}
