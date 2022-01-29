#include "hash_tables.h"

/**
 * @brief 
 * 
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node = NULL;
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
				node = node->next;
			}
			free(node);
			i++;
		}
		free(ht);
	}
}