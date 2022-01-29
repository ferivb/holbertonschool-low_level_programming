#include "hash_tables.h"

/**
 * @brief 
 * 
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i = 0, comma = 0;

	if (ht != NULL)
	{
		printf("{");
		while (i < ht->size)
		{
			node = ht->array[i];
			while (node)
			{
				if (comma)
					printf(", ");
				printf("\'%s\': \'%s\'", node->key, node->value);
				comma = 1;
				node = node->next;
			}
			i++;
		}
		printf("}\n");
	}
}