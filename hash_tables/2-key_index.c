#include "hash_tables.h"

/**
 * key_index - function
 * @key: a key in table
 * @size: size of table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
