#include "3-calc.h"

/**
 * main - test the code
 * @argc: integer
 * @argv: arguments arrays
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(*(argv + 1));
	b = atoi(*(argv + 3));
	function = get_op_func(*(argv + 2));
	if (function == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = function(a, b);

	printf("%d\n", result);

	return (0);
}
