#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int main(void)
{
	char *pid_max_file = "/proc/sys/kernel/pid_max";
	int file_d;
	char *content;

	file_d = open(pid_max_file, O_RDONLY);

	content = malloc(sizeof(char) * 50);
	if (content == NULL)
		return (0);
	read(file_d, content, (size_t) sizeof(content));

	printf("pid_max = %s\n", content);
	free(content);
	return (0);
}
