#include "variadic_functions.h"

/**
 * sum_them_all - function
 * @n: number of arguments
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;

	va_list arg_list;

	if (n == 0)
		return (sum);

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg_list, int);
	}

	va_end(arg_list);
	return (sum);
}
