#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 *
 * @argc: arguments integer
 *
 * @argv: an argument vector
 *
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int result = 0, i = 0, j = 0;

	while (*(argv + i))
	{
		j = 0;
		while (*(*(argv + i) + j))
		{
			if((*(*(argv + i) + j) < '0' || *(*(argv + i) + j) > '9'))
			{
				printf("Error\n");
				return(1);
			}
			j++;
		}
		result += atoi(*(argv + i));
		i++;
	}
	printf("%d\n", result);
	return (0);
}
