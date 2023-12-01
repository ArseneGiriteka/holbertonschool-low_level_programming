#include "main.h"

/**
 * set_bit - func
 * @n: address of UL
 * @index: index
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	*n = *n | (1UL << index);
	return (1);
}
