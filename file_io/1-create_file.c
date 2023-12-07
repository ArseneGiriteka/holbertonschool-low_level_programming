#include "main.h"

size_t _length(char *str);

/**
 * create_file - function to create file
 * @filename: file name
 * @text_content: the text to inter
 * Return: 1(success) and -1 for fail
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	ssize_t wrote_letters;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_d == -1)
		return (-1);

	if (text_content != NULL)
		wrote_letters = write(file_d, text_content, _length(text_content));
	else
		wrote_letters = write(file_d, "", 0);

	if (wrote_letters == -1)
	{
		close(file_d);
		return (-1);
	}

	return (1);
}

/**
 * _length - function
 * @str: a string value
 * Return: a size of @str
 */
size_t _length(char *str)
{
	size_t size = 0;

	if (str == NULL)
		return (0);

	while (*(str + size) != '\0')
		size++;

	return  (size);
}
