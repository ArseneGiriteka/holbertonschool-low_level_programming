#include "hash_tables.h"

char *_strdup(const char *str);
size_t _strcomp(const char *str_a, const char *str_b);

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key. It can't be an empty string.
 * @value: The value associated with the key. It must be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];

	while (current != NULL)
	{
		if (_strcomp(current->key, key) == 1)
		{
			free(current->value);
			current->value = _strdup((const char *) value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = _strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = _strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

/**
 * _strcomp - function
 * @str_a: string
 * @str_b: string
 * Return: integer 1(success) 0(failure)
 */
size_t _strcomp(const char *str_a, const char *str_b)
{
	size_t i = 0;

	while (*(str_a + i) != '\0' && (*(str_a + i) == *(str_b + i)))
		i++;
	if (*(str_a + i) == *(str_b + i))
		return (1);
	else
		return (0);
}

/**
 * _strdup - function
 * @str: string to copy
 * Return: a copy of @str
 */
char *_strdup(const char *str)
{
	size_t i = 0;
	char *copy;

	if (str == NULL)
		return (NULL);
	while (*(str + i))
		i++;
	copy = malloc(sizeof(char) * (i + 1));
	if (copy == NULL)
		return (NULL);
	*(copy + i) = '\0';
	while (i != 0)
	{
		i--;
		*(copy + i) = *(str + i);
	}
	return (copy);
}
