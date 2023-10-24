#include "main.h"

/**
 * print_rev - print a string in reversed order
 *
 * @s: a string value
 *
 * Return: Always nothing
 */
void print_rev(char *s)
{
	int length = 0, i = 0;

	while (*(s + i) != '\0')
	{
		length++;
		i++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
