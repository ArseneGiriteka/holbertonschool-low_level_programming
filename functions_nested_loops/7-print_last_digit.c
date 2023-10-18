#include "main.h"

/**
 * print_last_digit - Print the last digit of an int
 *
 * @n: int value passed in parameters
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int nb = 0;

	if (n < 0)
	{
		nb = n * -1;
	}
	else
	{
		nb = n;
	}
	_putchar('0' + (nb % 10));
	return (nb % 10);
}
