#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <sys/types.h>

char** splitString(const char *inputString, char delimiter, int *segmentCount);
void printStrings(char **array_of_strings);

int main()
{
	while(1)
	{
		pid_t child_pid = fork();
		if (child_pid == -1)
		{
			perror("couldn't make a new process !\n");
			return (EXIT_FAILURE);
		}
		char *input, **argv = NULL;
		ssize_t read_bytes = 0;
		size_t size = 0;
		int wstatus, segment_count = 0;

		size = 0;

		if (child_pid == 0)
		{
			input = NULL;
			size = 0;
			printf("#cisfun$ ");
			read_bytes = getline(&input, &size, stdin);
			if (read_bytes == -1 || *input == EOF)
			{
				printf("Impossible to read line\n");
				return (-1);
			}
			if (input[read_bytes - 1] == '\n')
				input[read_bytes - 1] = '\0';
			argv = splitString(input, ' ', &segment_count);
			if (argv == NULL)
				return (-1);
			printf("%d\n", segment_count);
			printStrings(argv);
			if (execve(*(argv + 0), argv, NULL) == -1)
				perror("Error !\n");
			free(input);
		}
		else
			waitpid(child_pid, &wstatus, 0);
	}
	return (0);
}

void printStrings(char **array_of_strings)
{
	// Iterate through the array until a NULL pointer is encountered
	for (int i = 0; array_of_strings[i] != NULL; ++i) {
		// Print each string in the array
		printf("%s\n", array_of_strings[i]);
	}
}

char** splitString(const char *inputString, char delimiter, int *segmentCount) {
	// Count the number of segments
	*segmentCount = 1; // At least one segment
	for (const char *ptr = inputString; *ptr != '\0'; ++ptr) {
		if (*ptr == delimiter) {
			(*segmentCount)++;
		}
	}

	// Allocate memory for the array of strings
	char **segments = (char **)malloc((*segmentCount) * sizeof(char *));
	if (segments == NULL) {
		fprintf(stderr, "Memory allocation error\n");
		exit(EXIT_FAILURE);
	}

	// Copy segments into the array
	const char *start = inputString;
	int segmentIndex = 0;

	for (const char *ptr = inputString; *ptr != '\0'; ++ptr) {
		if (*ptr == delimiter || *(ptr + 1) == '\0') {
			// Calculate the length of the segment
			size_t segmentLength = (ptr - start) + ((*ptr == delimiter) ? 0 : 1);

			// Allocate memory for the segment
			segments[segmentIndex] = (char *)malloc((segmentLength + 1) * sizeof(char));
			if (segments[segmentIndex] == NULL) {
				fprintf(stderr, "Memory allocation error\n");
				exit(EXIT_FAILURE);
			}

			// Copy the segment into the array
			strncpy(segments[segmentIndex], start, segmentLength);
			segments[segmentIndex][segmentLength] = '\0';

			// Move to the next segment
			start = ptr + 1;
			segmentIndex++;
		}
	}

	return segments;
}
