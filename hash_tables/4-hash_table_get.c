#include "hash_tables.h"

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
	if (node != NULL)
		return (node->value);
	else
		return (NULL);
}
