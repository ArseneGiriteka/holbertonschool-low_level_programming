#include "main.h"

/**
 * clear_bit - function
 * @n: address of a UL
 * @index: index
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	*n = *n & ~(1UL << index);
	return (1);
}
