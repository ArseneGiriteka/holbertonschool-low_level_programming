#include "main.h"

/**
 * main - test code
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	print_multiple_fizz_buzz();
	return (0);
}

/**
 * print_multiple_fizz_buzz - function
 *
 * Return: nothing
 */
void print_multiple_fizz_buzz(void)
{
	int i = 0;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
}
