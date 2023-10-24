#include "main.h"

/**
 * swap_int -  function used to swap values of to integers
 *
 * @a: integer
 *
 * @b: integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
