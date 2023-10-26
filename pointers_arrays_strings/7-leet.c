#include "main.h"

/**
 * leet - function
 *
 * @str: string
 *
 * Return: a string
 */
char *leet(char *str)
{
	unsigned int i = 0;

	int x = 0, length = 0;

	char ch[] = {'a', 'e', 'o', 't', 'l'};

	char rep_ch[] = {'4', '3', '0', '7', '1'};

	while (*(ch + length))
	{
		length++;
	}

	while (*(str + i))
	{
		for (x = 0; x < length; x++)
		{
			if ((*(str + i) == *(ch + x)) || (*(str + i) == (*(ch + x) - 'a' + 'A')))
			{
				*(str + i) = *(rep_ch + x);
				break;
			}
		}
		i++;
	}

	return (str);
}
