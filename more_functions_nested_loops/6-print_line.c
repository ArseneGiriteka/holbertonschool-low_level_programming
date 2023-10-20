#include "main.h"
/**
 * print_line - print a line
 *
 * @n: give how much to print
 *
 * Return: nothing
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i = 0;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
