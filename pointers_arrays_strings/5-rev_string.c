#include "main.h"

void swap_char(char *s, int posA, int posB);

/**
 * rev_string - reverse a string
 *
 * @s: a string value
 *
 * Return: Always nothing
 */
void rev_string(char *s)
{
	int length = 0, i = 0;

	while (*(s + i) != '\0')
	{
		length++;
		i++;
	}

	i = 0;

	while (i <= (((length - 1) - ((length - 1) % 2)) / 2))
	{
		swap_char(s, i, length - 1 - i);
		i++;
	}
}

/**
 * swap_char - swap char from a string
 *
 * @str: string value
 *
 * @posA: position A
 *
 * @posB: position B
 *
 * Return: Always nothing
 */
void swap_char(char *str, int posA, int posB)
{
	char temp = *(str + posA);

	*(str + posA) = *(str + posB);
	*(str + posB) = temp;
}
