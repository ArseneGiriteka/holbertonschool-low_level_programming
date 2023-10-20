#include "main.h"

/**
 * more_numbers - print numbers
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int n = 0, i = 0;

	while (n < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar('0' + i);
		}
		_putchar('\n');
		n++;
	}
}
