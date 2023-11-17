#include "variadic_functions.h"

char *_copy(char *org);

/**
 * print_strings - function to print strings
 * @separator: separator
 * @n: number of arguments
 * Return: nothing
 */
void print_strings(const char *separator,
		const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *str;

	va_start(args, n);
	while (i < n)
	{
		str = _copy(va_arg(args, char *));
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL)
		{
			if (i < (n - 1) && *separator != '\0')
			{
				printf("%s", separator);
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 * _copy - function
 * @org: string
 * Return: nothing
 */
char *_copy(char *org)
{
	unsigned int i = 0, len = 0;
	char *copy;

	if (org == NULL)
		return (NULL);

	while (*(org + len))
	{
		len++;
	}

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	while (*(org + i))
	{
		*(copy + i) = *(org + i);
		i++;
	}
	*(copy + i) = '\0';
	return (copy);
}
