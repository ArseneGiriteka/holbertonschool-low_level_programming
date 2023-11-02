#include "main.h"

/**
 * _abs - Compute absolute values of integers
 *
 * @n: integer value passed in parameter
 *
 * Return: absolute value of a number
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
