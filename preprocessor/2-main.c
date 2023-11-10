#include "main.h"
#include "_putchar.c"

/**
 * main - function
 * Return: integer value
 */
int main(void)
{
	unsigned int i = 0;

	while (*(__FILE__ + i))
	{
		_putchar(*(__FILE__ + i));
		i++;
	}
	_putchar('\n');
	return (0);
}
