#include "main.h"

/**
 * _strlen_recursion - function
 *
 * @s: a string value
 *
 * Return: integer value
 */
int _strlen_recursion(char *s)
{
	unsigned int i = 0;

	if (*(s + i))
	{
		return (1 + _strlen_recursion((s + 1)));
	}
	else
		return (0);
}
