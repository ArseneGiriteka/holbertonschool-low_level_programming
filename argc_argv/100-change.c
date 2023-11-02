#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 *
 * @argc: integer value
 *
 * @argv: arguments vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int amount = 0, n25 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;

	if (argc == 2)
	{
		amount = atoi(argv[1]);
	}
	else if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	n25 = (amount - (amount % 25)) / 25;
	n10 = (amount - (n25 * 25) - ((amount - (n25 * 25)) % 10)) / 10;
	n5 = (amount - (n25 * 25) - (n10 * 10) -
			((amount - (n25 * 25) - (n10 * 10)) % 5)) / 5;
	n2 = (amount - (n25 * 25) - (n10 * 10) - (n5 * 5) -
			((amount - (n25 * 25) - (n10 * 10) - (n5 * 5)) % 2)) / 2;
	n1 = (amount - (n25 * 25) - (n10 * 10) - (n5 * 5) - (n2 * 2));
	printf("%d\n", n25 + n10 + n5 + n2 + n1);
	return (0);
}
