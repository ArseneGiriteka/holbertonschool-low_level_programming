#include <stdio.h>

/**
 * main - print number of arguments
 *
 * @argc: integer value
 *
 * @argv: a vector
 *
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	while (*(argv + i))
	{
		i++;
	}
	printf("%d\n", i - 1);
	return (0);
}
