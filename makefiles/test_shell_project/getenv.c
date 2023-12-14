#include <stdio.h>
#include <string.h>

extern char **environ;

char *_getenv(const char *name);

int main(int ac, char **argv)
{
	printf("%s\n", _getenv(*(argv + 1)));
	return (0);
}

char *_getenv(const char *name)
{
	size_t count = 0;

	while (*(environ + count) != NULL)
	{
		if (strcmp((const char *) name, (const char *) (*(environ + count))) == 0)
			return (*(environ + count));
		count++;
	}

	return (NULL);
}
