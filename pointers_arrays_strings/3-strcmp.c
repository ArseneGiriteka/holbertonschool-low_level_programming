#include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: a string
 *
 * @s2: a string
 *
 * Return: an integer value
 */
int _strcmp(char *s1, char *s2)
{
	int sum1 = 0, sum2 = 0, i = 0;

	while (*(s1 + i))
	{
		sum1 += *(s1 + i);
		i++;
	}

	i = 0;

	while (*(s2 + i))
	{
		sum2 += *(s2 + i);
		i++;
	}

	return (sum1 - sum2);
}
