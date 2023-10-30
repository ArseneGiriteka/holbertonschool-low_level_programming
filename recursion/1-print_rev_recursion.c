#include "main.h"

/**
 * _print_rev_recursion - function
 *
 * @s: string value
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	unsigned int i = 0;

	if (*(s + i))
	{
		i++;
		_print_rev_recursion(s + i);
		_putchar(*(s + i - 1));
	}
	else
	{
		return;
	}

}
