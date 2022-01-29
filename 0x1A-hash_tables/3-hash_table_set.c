#include "hash_tables.h"

/**
 * new_pair - Creates a new node
 *
 * @key: Node's key
 * @value: Node's value
 *
 * Return: The new node
 */
hash_node_t *new_pair(const char *key, const char *value)
{
	hash_node_t *new = NULL;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = (NULL);

	return (new);
}


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

	if (key && key[0] != '\0' && ht && ht->array && ht->size)
	{
		/* Generates the hash(index) for the key */
		index = key_index((const unsigned char *)key, ht->size);

		/* If the hash index is empty */
		if (ht->array[index] == NULL)
		{
			new = new_pair(key, value);
			ht->array[index] = new;
			return (1);
		}
		/* Collission handling */
		else
		{
			collision = malloc(sizeof(hash_node_t));
			if (collision == NULL)
				return (0);
			collision = ht->array[index];
			while (collision != NULL)
			{
				if (strcmp(collision->key, key) == 0)
				{
					free(collision->value);
					collision->value = strdup(value);
					return (1);
				}
				collision = collision->next;
			}
			collision = ht->array[index];
			new = new_pair(key, value);
			new->next = collision;
			ht->array[index] = new;
			return (1);
		}
	}
	return (0);
}
