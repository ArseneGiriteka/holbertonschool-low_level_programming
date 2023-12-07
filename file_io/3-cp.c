#include "main.h"

void close_err(int file_d);

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
		dprintf(1, "Usage: cp file_from file_to\n");
		exit(97);
	}
	value = copy_text_file(argv[1], argv[2]);
	if (value == -1)
	{
		dprintf(2, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	else if (value == -2)
	{
		dprintf(2, "Error: Can't write to %s", argv[2]);
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
	ssize_t read_bytes, wrote_bytes;
	char buffer[1024];

	if (file_from == NULL)
		return (-1);
	if (file_to == NULL)
		return (-2);
	file_from_d = open(file_from, O_RDONLY);
	if (file_from_d == -1)
		return (-1);
	file_to_d = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to_d == -1)
	{
		if (close(file_from_d) == -1)
			close_err(file_from_d);
		return (-2);
	}
	read_bytes = read(file_from_d, buffer, 1024);
	if (read_bytes == -1)
	{
		if (close(file_from_d) == -1)
			close_err(file_from_d);
		if (close(file_to_d) == -1)
			close_err(file_to_d);
		return (-1);
	}
	wrote_bytes = write(file_to_d, buffer, read_bytes);
	if (wrote_bytes == -1 || wrote_bytes != read_bytes)
	{
		if (close(file_from_d) == -1)
			close_err(file_from_d);
		if (close(file_to_d) == -1)
			close_err(file_to_d);
		return (-2);
	}
	if (close(file_from_d) == -1)
		close_err(file_from_d);
	if (close(file_to_d) == -1)
		close_err(file_to_d);
	return (1);
}

/**
 * close_err - function
 * @file_d: a file discriptor
 * Return: nothing
 */
void close_err(int file_d)
{
	dprintf(2, "Error: Can't close fd %d", file_d);
	exit(100);
}
