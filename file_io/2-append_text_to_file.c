#include "main.h"

size_t _length(char *str);

/**
 * append_text_to_file - function
 * @filename: filename string value
 * @text_content: text value
 * Return: integer value
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	ssize_t wrote_bytes;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);

	if (text_content != NULL)
		wrote_bytes = write(file_d, text_content, _length(text_content));
	else
		wrote_bytes = write(file_d, "", 0);

	if (wrote_bytes == -1)
	{
		close(file_d);
		return (-1);
	}
	close(file_d);
	return (1);
}

/**
 * _length - function
 * @str: a string value
 * Return: a size of str
 */
size_t _length(char *str)
{
	size_t size = 0;

	if (str == NULL)
		return (0);

	while (*(str + size) != '\0')
		size++;

	return (size);
}
