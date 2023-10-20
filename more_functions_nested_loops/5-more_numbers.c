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
			int dn = i / 10, un = i % 10;

			if (dn != 0)
			{
				_putchar('0' + dn);
			}

			_putchar('0' + un);
		}
		_putchar('\n');
		n++;
	}
}
