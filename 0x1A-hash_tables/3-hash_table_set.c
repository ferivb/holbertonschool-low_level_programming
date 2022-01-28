#include "hash_tables.h"

/**
 * hash_table_set - Sets a key:value pair to the ht
 *
 * @ht: hash table
 * @key: key to set
 * @value: value to set
 *
 * Return: 1 for success, 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *collision = NULL, *new = NULL;

	if (key == NULL)
		return 0;

	/* Generates the hash(index) for the key */
	index = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}

	/* If the hash index is empty */
	if (ht->array[index] == NULL)
	{
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = NULL;
		ht->array[index] = new;
		return (1);
	}
	/* Collission handling */
	else
	{
		collision = malloc(sizeof(hash_node_t));
		if (collision == NULL)
		{
			free(collision);
			return (0);
		}
		collision = ht->array[index];
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = collision;
		ht->array[index] = new;
		return (1);
	}
	return (0);
}
