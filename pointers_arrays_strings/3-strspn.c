#include "main.h"

/**
 * _strsp - function
 *
 * @s: string value
 *
 * @accept: array char value
 *
 * Return: unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, s_size = 0;
	
	while (*(s + i) && (*(s + i) != ' '))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				s_size++;
				break;
			}
			j++;
		}
		i++;
	}

	return (s_size);
}
