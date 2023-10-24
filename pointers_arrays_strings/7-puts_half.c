#include "main.h"

/**
 * puts_half - print the scond half
 *
 * @str: string value
 *
 * Return: always nothing
 */
void puts_half(char *str)
{
	int length = 0, i = 0;

	while (*(str + i))
	{
		length++;
		i++;
	}

	for (i = ((length - (length % 2)) / 2) + 1; i < length; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
