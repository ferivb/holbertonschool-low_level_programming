#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
	hash_node_t *node;
	unsigned long int i = 0;
	unsigned long int index = 0;
	char *temp = NULL;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "This should print second");
	hash_table_set(ht, "mentioner", "This should print first");
	hash_table_set(ht, "empty", "");
	hash_table_set(ht, "depravement", "You shouldn't see this");
	hash_table_set(ht, "depravement", "Override");

	while (i < 1024)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node->key;
			index = key_index((const unsigned char *)temp, ht->size);
			printf("-----array[i] = %li ------\n", i);
			printf("Key: %s   Hash: %li\n pair->\t\t", node->key, index);
			printf("%s - %s\n\n", node->key, node->value);
			node = node->next;
		}
		i++;		
	}
	
    return (EXIT_SUCCESS);
}