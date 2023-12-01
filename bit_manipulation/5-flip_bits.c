#include "main.h"

/**
 * flip_bits - function
 * @n: the first UL
 * @m: second UL
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_value = n ^ m;
	unsigned int i = 0;

	while (xor_value != 0)
	{
		i += xor_value & 1;
		xor_value = xor_value >> 1;
	}

	return (i);
}
