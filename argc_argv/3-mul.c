#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 *
 * @argc: integer value
 *
 * @argv: an arguments vector
 *
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int result = 1, i = 1;

	while (*(argv + i))
	{
		result *= atoi(*(argv + i));
		i++;
	}

	if (i <= 2)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", result);
	}
	return (0);
}
