#include "main.h"
#include <stdio.h>

/**
 * print_array - print
 *
 * @a: integer array
 *
 * @n: integer
 *
 * Return: return nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (*(a + i) && i < n)
	{
		printf("%d", *(a + i));
		if (!(i == (n - 1) || (*(a + i + 1) == '\0')))
			printf(", ");
		i++;
	}
	printf("\n");
}
