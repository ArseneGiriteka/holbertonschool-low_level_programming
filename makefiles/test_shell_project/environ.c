#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;

int main(int ac, char **argv)
{
	size_t i = 0;
	while(*(environ + i) != NULL)
	{
		printf("%s\n", *(environ + i));
		i++;
	}
	return (0);
}
