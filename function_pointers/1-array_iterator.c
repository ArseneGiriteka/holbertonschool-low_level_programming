#include "function_pointers.h"

/**
 * array_iterator - function
 * @array: array of int
 * @size: the size of @array
 * @action: function to process @array elements
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
	if (action != NULL && array != NULL)
	{
		while (i < size || (array + i) != NULL)
		{
			action(*(array + i));
			i++;
		}
	}
}
