#include "main.h"

int check_division(int, int);

/**
 * is_prime_number - function
 *
 * @n: integer
 *
 * Return: integer value
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	else
		return (check_division(n, 2));
}

/**
 * check_division - function
 *
 * @n: integer value
 *
 * @x: integer value
 *
 * Return: integer value
 */
int check_division(int n, int x)
{
	if (x == n)
		return (1);
	else if (n % x == 0)
		return (0);
	else
		return check_division(n, x + 1);
}
