#include "hash_tables.h"

/**
 * key_index - This function gives the index of a key
 *
 * @key: The key
 * @size: size of the array of the hash table
 *
 * Return: The index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	return (hash_value % size);
}
