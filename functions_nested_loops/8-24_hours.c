#include "main.h"

/**
 * jack_bauer - print jack
 *
 * Return: Always nothing
 */
void jack_bauer(void)
{
	int h = 0, m = 0, dh = 0, dm = 0, uh = 0, um = 0;

	while (h < 24)
	{
		while (m < 60)
		{
			dh = (h - (h % 10)) / 10;
			uh = h % 10;
			dm = (m - (m % 10)) / 10;
			um = m % 10;
			_putchar('0' + dh);
			_putchar('0' + uh);
			_putchar(':'),
			_putchar('0' + dm);
			_putchar('0' + um);
			_putchar('\n');
			m++;
		}
		m = 0;
		h++;
	}
}
