#include "main.h"

/**
 * _isdigit - check if char is a digit
 *
 * @c: is a parameter
 *
 * Return: 1(digit) and 0(otherwise)
 */
int _isdigit(int c)
{
	if (48 <= c && 57 >= c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
