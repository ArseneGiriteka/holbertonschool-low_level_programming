#include "main.h"

/**
 * factorial - function
 *
 * @n: integer value
 *
 * Return: integer value
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
