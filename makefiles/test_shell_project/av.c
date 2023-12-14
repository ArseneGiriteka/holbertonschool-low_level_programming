#include <stdio.h>

int main(int ac, char **argv)
{
	size_t count = 0;

	while (*(argv + count) != NULL)
	{
		printf("argv[%lu] = \"%s\"\n", count, *(argv + count));
		count++;
	}

	return (0);
}
