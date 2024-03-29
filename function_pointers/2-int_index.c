#include "function_pointers.h"

/**
 * int_index - function
 * @array: array of integer
 * @size: size of @array
 * @cmp: function pointer
 * Return: an index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(*(array + i)) != 0)
			return (i);
		i++;
	}

	return (-1);
}
