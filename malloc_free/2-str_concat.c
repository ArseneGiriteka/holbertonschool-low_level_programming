#include "main.h"

unsigned int length(char *str);
char *_copy(char *str);

/**
 * str_concat - function
 * @s1: string value
 * @s2: string value
 * Return: pointer to a string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, s1_length = 0, s2_length = 0;
	char *copy = NULL;

	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char));
		*s1 = '\0';
	}

	if (s2 == NULL)
	{
		s2 = malloc(sizeof(char));
		*s2 = '\0';
	}

	s1_length = length(s1);
	s2_length = length(s2);

	copy = malloc(sizeof(char) * (s1_length + s2_length + 1));
	if (copy == NULL)
		return (copy);

	i = 0;
	while (*(s1 + i))
	{
		*(copy + i) = *(s1 + i);
		i++;
	}

	while (*(s2 + (i - s1_length)))
	{
		*(copy + i) = *(s2 + (i - s1_length));
		i++;
	}

	*(copy + i) = '\0';
	return (copy);
}

/**
 * length - function
 * @str: pointer string
 * Return: an int
 */
unsigned int length(char *str)
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

/**
 * _copy - function
 * @str: a string value
 * Return: a pointer to string
 */
char *_copy(char *str)
{
	unsigned int len = 0, i = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	len = length(str);

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (copy);

	i = 0;
	while (*(str + i))
	{
		*(copy + i) = *(str + i);
		i++;
	}

	*(copy + i) = *(str + i);

	return (copy);
}
