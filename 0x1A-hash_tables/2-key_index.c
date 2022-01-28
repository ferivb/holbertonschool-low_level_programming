#include "hash_tables.h"

/**
 * @brief 
 * 
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0, k;

	k = hash_djb2(key);
	index = k % size;

	return (index);
}