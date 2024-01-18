#include "search_algos.h"

/**
 * binary_search - binary search algo
 * @array: an integer arrays
 * @size: size of @array
 * @value: the value to find in @array
 * Return: first index of @value or -1 (unfounded)
 */
int binary_search(int *array, size_t size, int value)
{
	int right = (int) size - 1, left = 0, m, i = 0;

	while (left <= right)
	{
		m = ((int) ((right + left) / 2)) + 1;
		
		i = left;
		printf("Searching in array:");
		while(i <= right)
		{
			if (i != right)
				printf(" %d,", i);
			else
				printf(" %d\n", i);
			i++;
		}

		if (*(array + m) > value)
		{
			right = m - 1;
		}
		else if (*(array + m) < value)
		{
			left = m + 1;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}
