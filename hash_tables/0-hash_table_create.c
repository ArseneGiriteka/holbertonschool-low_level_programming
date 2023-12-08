#include "hash_tables.h"

/**
 * hash_table_create - function
 * @size: size of hash table to create
 * Return: that hash table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	if (size == 0)
		table->array = NULL;
	else
	{
		table->array = malloc(sizeof(hash_node_t *) * size);
		if (table->array == NULL)
		{
			free(table);
			return (NULL);
		}
		while (i < size)
		{
			*((table->array) + i) = NULL;
			i++;
		}
	}
	return (table);
}
