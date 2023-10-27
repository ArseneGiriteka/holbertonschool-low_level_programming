#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char generate_random_char();

/**
 * main - to check the code
 *
 * Return: an int value
 */
int main(void)
{
	char *key = "";
	int i = 0, length = 0;
	time_t t;
	
	srand((unsigned) (time(&t)));
	length = (rand() % 50);
	while (i < length)
	{
		*(key + i) = generate_random_char();
		i++;
	}

	printf("%s", key);

	return (0);
}

/**
 * generate_random_char - function
 *
 * Return: a char value
 */
char generate_random_char()
{
	char value;
	value = 41 + (rand() % (127 - 41));
	return value;
}
