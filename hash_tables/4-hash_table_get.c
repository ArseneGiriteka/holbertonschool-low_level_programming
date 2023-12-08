#include "hash_tables.h"

size_t _strcomp(const char *str_a, const char *str_b);

/**
 * hash_table_get - function
 * @ht: hash table
 * @key: a key
 * Return: a value or NULL(error);
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (_strcomp(node->key, key) == 1)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
