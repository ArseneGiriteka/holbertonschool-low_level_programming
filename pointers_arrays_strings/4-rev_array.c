#include "main.h"

/**
 * reverse_array - function
 *
 * @a: an array
 *
 * @n: size
 *
 * Return: always nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = 0;

	for (i = 0; i < (n / 2); i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = temp;
	}
}
