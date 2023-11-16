#include "function_pointers.h"

int _length(int *);

/**
 * int_index - function
 * @array: array of integer
 * @size: size of @array
 * @cmp: function pointer
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL)
		return (-1);
	
	if (size < _length(array))
		size = _length(array);

	while (i < size)
	{
		if (cmp(*(array + i)) != 0)
			return (i);
		i++;
	}

	return (-1);
}

/**
 * _length - function
 * @array: array of int
 * Return: integer
 */
int _length(int *array)
{
	int i = 0;

	if (array == NULL)
		return (0);

	while ((array + i) != NULL)
	{
		i++;
	}
	return (i);
}
