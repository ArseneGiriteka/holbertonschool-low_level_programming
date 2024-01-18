#include "search_algos.h"

/**
 * linear_search - search a value in array by linear search
 * @array: an array of int
 * @size: the size of array
 * @value: the value to search in array
 * Return: (index of @value) or -1(unfounded)
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	while (index < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int) index, *(array + index));
		if (*(array + index) == value)
		{
			return ((int) index);
		}

		index++;
	}

	return (-1);
}
