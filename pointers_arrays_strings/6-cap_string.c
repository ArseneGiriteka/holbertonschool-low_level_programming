#include "main.h"

/**
 * cap_string - function
 *
 * @str: a string
 *
 * Return: a string
 */
char *cap_string(char *str)
{
	int i = 0;

	if ((*(str + 0) <= 'z') && (*(str + 0) >= 'a'))
	{
		*(str + 0) -= 'a' - 'A';
	}

	while (*(str + i))
	{
		while ((*(str + i) == '\n') || (*(str + i) == ' ') ||
				(*(str + i) == '\n') || (*(str + i) == ',')
				|| (*(str + i) == ';') || (*(str + i) == '.')
				|| (*(str + i) == '!') || (*(str + i) == '?')
				|| (*(str + i) == '"') || (*(str + i) == '(')
				|| (*(str + i) == ')') || (*(str + i) == '{')
				|| (*(str + i) == '}') || (*(str + i) == '\t')
		      )
		{
			i++;
			if ((*(str + i) <= 'z') && (*(str + i) >= 'a'))
			{
				*(str + i) -= 'a' - 'A';
			}
		}
		i++;
	}

	return (str);
}
