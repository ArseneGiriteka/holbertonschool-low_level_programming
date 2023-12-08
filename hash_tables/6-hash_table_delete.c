#include "hash_tables.h"

/**
 * hash_table_delete - function
 * @ht: a hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *last;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			last = current;
			current = current->next;
			free(last->key);
			free(last->value);
			free(last);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
