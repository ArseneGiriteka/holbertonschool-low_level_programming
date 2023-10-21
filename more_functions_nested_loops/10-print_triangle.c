#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: int give a size
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i = 0, j = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j >= (size - 1 - i))
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
