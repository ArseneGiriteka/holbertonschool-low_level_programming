#include "main.h"

/**
 * read_textfile - function
 * @filename: file name
 * @letters: how many letters we have
 * Return: how many printed, 0(nothing printed),-1(error);
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	char *buffer;
	ssize_t read_letters, wrote_letters;

	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}
	read_letters = read(file_d, buffer, letters);
	*(buffer + letters) = '\0';
	if (read_letters == -1)
	{
		free(buffer);
		close(file_d);
		return (0);
	}
	wrote_letters = write(STDOUT_FILENO, buffer, (size_t) read_letters);
	if (wrote_letters == -1 || wrote_letters != read_letters)
	{
		printf("YOOOOO");
		free(buffer);
		close(file_d);
		return (0);
	}
	free(buffer);
	close(file_d);
	return (wrote_letters);
}
