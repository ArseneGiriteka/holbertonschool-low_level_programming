#include "hash_tables.h"

char *_strdup(const char *str);
size_t _strcomp(const char *str_a, const char *str_b);

/**
 * hash_table_set - function
 * @ht: a hash table
 * @value: a value
 * @key: key of @value
 * Return: 1(success) 0(failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	hash_node_t *tmp_node;
	unsigned long int l1, l2;

	if (ht == NULL || key == NULL)
		return (0);
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

	if (*(ht->array) == NULL)
	{
		(ht->size)++;
		new_node->next = NULL;
		*(ht->array) = new_node;
		return (1);
	}
	tmp_node = *(ht->array);

	while (tmp_node != NULL)
	{
		if (_strcomp(tmp_node->key, new_node->key) == 1)
		{
			tmp_node->value = new_node->value;
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			return (1);
		}

		if ((key_index((const unsigned char *) (tmp_node->key), ht->size) ==
				key_index((const unsigned char *) (new_node->key), ht->size)) &&
				(_strcomp(tmp_node->key, new_node->key) != 1))
		{
			(ht->size)++;
			new_node->next = *(ht->array);
			*(ht->array) = new_node;
			return (1);
		}

		if (tmp_node->next != NULL)
			tmp_node = tmp_node->next;
		else
			break;
	}
	(ht->size)++;
	new_node->next = NULL;
	tmp_node->next = new_node;
	return (1);
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
