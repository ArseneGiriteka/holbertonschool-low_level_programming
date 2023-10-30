#include "main.h"

/**
 * _puts_recursion - function
 *
 * @s: a string char
 *
 * Retutn: nothing at all
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i))
	{
		_putchar(*(s + i));
		i++;
		_puts_recursion(s + i);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
