#include "main.h"

/**
 * _atoi - prase string to int
 *
 * @s: a string
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	int signe = 1;
	unsigned int i = 0, result = 0;

	while (*(s + i))
	{
		while (*(s + i) == '-')
		{
			signe *= -1;
			i++;
			if (!((*(s + i) <= '9' && *(s + i) >= '0') || (*(s + i) == ' ')
						|| (*(s + i) == '-') || (*(s + i) == '+')))
			{
				signe = 1;
			}
		}

		while (*(s + i) <= '9' && *(s + i) >= '0')
		{
			result *= 10;
			result += (*(s + i) - 48);
			i++;
		}

		if (result != 0)
		{
			return (result * signe);
		}

		i++;
	}
	return (result);
}
