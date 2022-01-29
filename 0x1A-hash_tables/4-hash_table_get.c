#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: hash table you want to look into
 * @key: key you are looking for
 *
 * Return: Returns the value associated with the key / NULL if no key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node = NULL;
	unsigned long int index = 0;
	char *value = NULL;

	if (key && key[0] != '\0' && ht && ht->array && ht->size)
	{
		index = key_index((const unsigned char *)key, ht->size);
		node = ht->array[index];
		while (node)
		{
			if (strcmp(key, node->key) == 0)
			{
				value = strdup(node->value);
				return (value);
			}
			node = node->next;
		}
	}
	return (NULL);
}
