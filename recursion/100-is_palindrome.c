#include "main.h"

int is_a_palindrome(char *s, int index, int length);
int length(char *s, int index);

/**
 * is_palindrome - function
 *
 * @s: a string value
 *
 * Return: integer value
 */
int is_palindrome(char *s)
{
	int l = length(s, 0);

	if (l  == 0)
		return (0);
	else if (l == 1)
		return (1);
	else
		return (is_a_palindrome(s, 0, length(s, 0)));
}

/**
 * is_a_palindrome - function
 *
 * @s: a string value
 *
 * @index: integer value
 *
 * @l: integer value
 *
 * Return: integer value
 */
int is_a_palindrome(char *s, int index, int l)
{
	if ((s[index] == s[l - 1 - index]) && (index <= (int) (l / 2)))
	{
		if (index == (int) (l / 2))
			return (1);
		else
			return (is_a_palindrome(s, index + 1, l));
	}
	else
	{
		return (0);
	}
}

/**
 * length - function
 *
 * @s: string value
 *
 * @index: integer value
 *
 * Return: integer value
 */
int length(char *s, int index)
{
	if (*(s + index))
		return (length(s, index + 1));
	else
		return (index);
}
