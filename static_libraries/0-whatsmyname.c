#include <stdio.h>

/**
 * main - print the program name
 *
 * @argc: size of @argv
 *
 * @argv: an argument vector
 *
 * Return: integer value
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	puts(argv[0]);
	return (0);
}
