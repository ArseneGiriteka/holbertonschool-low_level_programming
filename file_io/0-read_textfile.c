#include "main.h"

ssize_t _length(char *str);

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
	*(buffer + letters) = '\0';
	read_letters = read(file_d, buffer, letters);
	if (read_letters == -1 || read_letters != _length(buffer))
	{
		free(buffer);
		close(file_d);
		return (0);
	}
	wrote_letters = write(STDOUT_FILENO, buffer, letters);
	if (wrote_letters == -1)
	{
		free(buffer);
		close(file_d);
		return (0);
	}
	free(buffer);
	close(file_d);
	return (read_letters);
}

/**
 * _length - function
 * @str: string
 * Return: the size, -1(NULL)
 */
ssize_t _length(char *str)
{
	ssize_t size = 0;

	if (str == NULL)
		return (-1);

	while (*(str + size))
		size++;

	return (size);
}
