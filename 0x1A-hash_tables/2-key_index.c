#include "hash_tables.h"

/**
 * key_index - Asigns an index to a given key
 *
 * @key: key to index
 * @size: size of the hash hash table
 *
 * Return: index modded by the size of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0, k;

	k = hash_djb2(key);
	index = k % size;

	return (index);
}
