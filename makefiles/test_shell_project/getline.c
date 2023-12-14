#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char *buffer = NULL;
	size_t buffer_size = 0;
	ssize_t read_bytes = 0;

	read_bytes = getline(&buffer, &buffer_size, stdin);
	if (read_bytes == -1)
		return (-1);
	printf("You entered (%d): %s\n",(int) buffer_size, buffer);
	free(buffer);
	return 0;
}

