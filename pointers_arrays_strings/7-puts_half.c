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

	if (length % 2 == 1)
		i = (length + 1) / 2;
	else
		i = length / 2;

	while (i < length)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
