#include "main.h"

void close_err(int file_d);
void close_all(int file_from_d, int file_to_d);

/**
 * main - to test copy_test_file
 * @arg: argument number
 * @argv: argumentes
 * Return: 97(incorrect number of arguments)
 * 98(file to copy doesn't exist)
 * 99(can not create or if write to file_to fails)
 */
int main(int arg, char **argv)
{
	int value;

	if (arg != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	value = copy_text_file(argv[1], argv[2]);
	if (value == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (value == -2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	return (0);
}

/**
 * copy_text_file - function
 * @file_from: a file to be copied
 * @file_to: a file destination
 * Return: 1(success) -1(reading failure) -2(writing faileure)
 * 100(can not close a file descriptor)
 */
int copy_text_file(const char *file_from, const char *file_to)
{
	int file_to_d, file_from_d;
	char buffer[1024];
	ssize_t read_bytes, writen_bytes;

	if (file_from == NULL)
		return (-1);
	file_from_d = open(file_from, O_RDONLY);
	if (file_from_d == -1)
		return (-1);
	if (file_to == NULL)
	{
		if (close(file_from_d) != 0)
			close_err(file_from_d);
		return (-2);
	}
	file_to_d = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to_d == -1)
	{
		if (close(file_from_d) != 0)
			close_err(file_from_d);
		return (-2);
	}
	while (1)
	{
		read_bytes = read(file_from_d, buffer, 1024);
		if (read_bytes == 0)
			break;
		else if (read_bytes < 0)
		{
			close_all(file_from_d, file_to_d);
			return (-1);
		}
		writen_bytes = write(file_to_d, buffer, read_bytes);
		if (writen_bytes < 0 || writen_bytes != read_bytes)
		{
			close_all(file_from_d, file_to_d);
			return (-2);
		}
		else if (writen_bytes == 0)
			break;
	}
	close_all(file_from_d, file_to_d);
	return (1);
}

/**
 * close_err - function
 * @file_d: a file discriptor
 * Return: nothing
 */
void close_err(int file_d)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d);
	exit(100);
}

/**
 * close_all - function
 * @file_from_d: file
 * @file_to_d: file
 * Return: nothing
 */
void close_all(int file_from_d, int file_to_d)
{
	if (close(file_from_d) != 0)
		close_err(file_from_d);
	if (close(file_to_d) != 0)
		close_err(file_to_d);
}
