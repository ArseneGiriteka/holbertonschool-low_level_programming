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
	n = n  % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	else
	{
		n = n;
	}
	_putchar('0' + n);
	return (n);
}
