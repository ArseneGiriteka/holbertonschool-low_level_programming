#include "main.h"

void _print_array(char*);
/**
 * print_chessboard - a function
 *
 * @a: a 2D array
 *
 * Return: Nothing at all
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i = 0;
	_print_array(*(a + i));
}

/**
 * print_array - function
 *
 * @a: array to print
 *
 * Return: nothing at all
 */
void _print_array(char *a)
{
	unsigned int i = 0;

	while (*(a + i))
	{
		_putchar(*(a + i));
		i++;
		if ((i % 8) == 0)
			_putchar('\n');
	}
}
