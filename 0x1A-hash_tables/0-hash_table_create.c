#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table with empty headers
 *
 * @size: size of the hash table
 * Return: Pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i = 0;

	/* Hash table memory allocation */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	/* Allocate memory for hash table node pointers */
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table->array);
		return (NULL);
	}

	/* Hash table creation */
	for (; i < size; i++)
		hash_table->array[i] = NULL;

	hash_table->size = size;

	return (hash_table);
}
