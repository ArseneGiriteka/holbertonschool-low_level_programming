#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function
 *
 * @a: integer pointer
 *
 * @size: size of diagonals
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	long int sumA = 0, sumB = 0;

	while (i < size)
	{
		sumA += (long) (a + (i * size))[i];
		sumB += (long) (a + (i * size))[size - 1 - i];
		i++;
	}

	printf("%ld, %ld\n", sumA, sumB);
}
