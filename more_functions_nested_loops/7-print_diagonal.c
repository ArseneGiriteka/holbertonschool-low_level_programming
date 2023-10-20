#include "main.h"

/**
 * print_diagonal - print a diagonal
 *
 * @n: is a parameter
 *
 * Return: always void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 0, j = 0;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= (i - 1); j++)
			{
				_putchar(' ');
			}
			_putchar(47);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
