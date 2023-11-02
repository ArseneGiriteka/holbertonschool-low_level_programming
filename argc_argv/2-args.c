#include <stdio.h>

/**
 * main - print all arguments
 *
 * @argc: arguments number
 *
 * @argv: arguments vector
 *
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 1;

	while (*(argv + i))
	{
		printf("%s\n", *(argv + i));
		i++;
	}
	return (0);
}
