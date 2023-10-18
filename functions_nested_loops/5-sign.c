#include "main.h"

/**
 * print_sign - let's get some code
 *
 * @n: parameter to check sign
 *
 * Return: +1,0,-1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
