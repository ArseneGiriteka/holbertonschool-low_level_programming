#include "main.h"

void print_digit(int);

/**
 * times_table - Prints the time table
 *
 * Return: return a void
 */
void times_table(void)
{
	int i = 0, x = 0, y = 0, max = 9;

	for (x = 0; x <= max; x++)
	{
		for (y = 0; y <= max; y++)
		{
			int number = 0, d1 = 0, d2 = 0, d3 = 0;

			number = y * i;
			d3 = number % 10;
			d2 = (number - d3) / 10;
			d1 = (number - (d2 * 10)) / 10;
			if (number != 0)
			{
				print_digit(d1);
				print_digit(d2);
			}
			else
			{
				if (y != 0)
				{
					_putchar(' ');
                                	_putchar(' ');
				}
			}
			_putchar('0' + d3);
			if (y != max)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
		y = 0;
		i++;
	}
}

/**
 * print_digit - print a digit
 *
 * @d: a parameter
 *
 * Return: Always nothing
 */
void print_digit(int d)
{
	if  (d == 0)
	{
		_putchar(' ');
	}
	else
	{
		_putchar('0' + d);
	}
}
