#include "main.h"

int _length(char *str);
/**
 * argstostr - function
 * @ac: integer value
 * @av: a pointer to string value
 * Return: a string value
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, t = 0, str_size = 0;
	char *str;

	if (ac <= 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		if (*(av + i) == NULL)
			return (NULL);

		str_size += _length(*(av + i));
		i++;
	}

	str = malloc(sizeof(char *) * (str_size + ac + 1));
	if (str == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (i < (str_size + ac + 1) && j < ac)
	{
		t = 0;
		while (*(*(av + j) + t))
		{
			*(str + i) = *(*(av + j) + t);
			i++;
			t++;
		}
		*(str + i) = '\n';
		i++;
		j++;
	}
	*(str + i) = '\0';

	return (str);
}

/**
 * _length - function
 * @str: string
 * Return: unsigned integer
 */
int _length(char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);

	while (*(str + len))
	{
		len++;
	}
	return (len);
}
