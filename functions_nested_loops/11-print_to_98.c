#include "main.h"

void print_i(int);

/**
 * print_to_98 - printo
 *
 * @n: parameter
 *
 *  Return: Always void
 */
void print_to_98(int n)
{
	int i = 0;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			print_i(i);
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			print_i(i);
		}

	}
}

/**
 * print_i - print a int
 *
 * @i: parameter
 *
 * Return: Always void
 */
void print_i(int i)
{
	if (i != 98)
	{
		printf("%d ,", i);
	}
	else
	{
		printf("%d\n", i);
	}
}
