#include "variadic_functions.h"

/**
 * print_numbers - function
 * @separator: separator string
 * @n: number of numbers passed in parameter
 * Return: nothing at all
 */
void print_numbers(const char *separator,
		const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list numbers;

	va_start(numbers, n);

	while (i < n)
	{
		printf("%d", va_arg(numbers, int));
		if (separator != NULL)
		{
			if ((i < (n - 1)) && *separator != '\0')
			{
				printf("%s ", separator);
			}
			i++;
		}
	}

	va_end(numbers);
	printf("\n");
}
