#include "hash_tables.h"

/**
 * hash_table_print - function that print a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int index;
	char *comma = "";

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0 ; index < ht->size - 1 ; index++)
	{
		current = ht->array[index];
		while (current != NULL)
		{
			printf("%s'%s': '%s'", comma, current->key, current->value);
			comma = ", ";
			current = current->next;
		}

	}
	printf("}\n");
}
