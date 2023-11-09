#include "main.h"

unsigned int _length(char *str);

/**
 * string_nconcat - function
 * @s1: a string pointer
 * @s2: a string pointer
 * @n: how many char to concantenate
 * Return: a string pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, s1_length = 0, s2_length = 0;
	char *copy;

	if (s1 == NULL)
		*s1 = '\0';

	if (s2 == NULL)
		*s2 = '\0';

	s1_length = _length(s1);
	s2_length = _length(s2);

	if (n < s2_length)
		s2_length = n;

	copy = malloc(sizeof(char) * (s1_length + s2_length + 1));
	if (copy == NULL)
		return (NULL);

	while (*(s1 + i))
	{
		*(copy + i) = *(s1 + i);
		i++;
	}

	while (*(s2 + i - s1_length) && ((i - s1_length) < n))
	{
		*(copy + i) = *(s2 + i - s1_length);
		i++;
	}

	*(copy + i) = '\0';

	return (copy);
}

/**
 * _length - function
 * @str: a string pointer
 * Return: an unsigned int
 */
unsigned int _length(char *str)
{
	unsigned int i = 0;

	if (str == NULL)
		return (0);

	while (*(str + i))
	{
		i++;
	}

	return (i);
}
