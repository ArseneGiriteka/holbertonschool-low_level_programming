#include <unistd.h>

int _putchar(char);
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - function
 * Return: integer value
 */
int main(void)
{
	unsigned int i = 0;

	while (*(__FILE__ + i))
	{
		_putchar(*(__FILE__ + i));
		i++;
	}
	_putchar('\n');
	return (0);
}
