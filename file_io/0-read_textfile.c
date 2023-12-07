#include "main.h"

ssize_t _length(char *str);
void init(char *str, size_t size, char c);

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

/**
 * init - funct
 * @str: string value
 * @size: size of str
 * @c: char value
 * Return: nothing
 */
void init(char *str, size_t size, char c)
{
	size_t i = 0;

	if (str == NULL || size == 0)
		return;

	while (i < size)
	{
		*(str + i) = c;
		i++;
	}
	*(str + i) = '\0';
	return;
}
