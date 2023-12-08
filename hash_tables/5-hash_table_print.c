#include <unistd.h>
#include "hash_tables.h"

void _puts(char *str);
int _putchar(char c);

/**
 * hash_table_print - function
 * @ht: hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i = 0;
	int tmp = 0;

	if (ht == NULL)
		return;

	_putchar('{');
	while (i < ht->size)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			if (tmp == 1)
				_puts(", ");
			_puts("'");
			_puts(current->key);
			_puts("': '");
			_puts(current->value);
			_puts("'");
			tmp = 1;
			current = current->next;
		}
		i++;
	}
	_puts("}\n");
}

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
 * _puts - function
 * @str: string
 * Return: nothin
 */
void _puts(char *str)
{
	unsigned long int i = 0;

	if (str == NULL || *str == '\0')
		return;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
}
