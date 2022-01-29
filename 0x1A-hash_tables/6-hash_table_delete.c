#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 *
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node = NULL, *temp = NULL;
	unsigned long int i = 0;

	if (ht != NULL)
	{
		while (i < ht->size)
		{
			node = ht->array[i];
			while (node)
			{
				free(node->key);
				free(node->value);
				temp = node->next;
				free(node);
				node = temp;
			}
			free(node);
			i++;
		}
		free(ht);
	}
}
