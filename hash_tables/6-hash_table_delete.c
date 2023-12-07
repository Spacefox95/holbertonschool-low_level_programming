#include "hash_tables.h"

/**
 * hash_table_delete - function that delete a hash table
 * @ht: the hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current = NULL;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	for (index = 0 ; index < ht->size ; index++)
	{
		current = ht->array[index];
		while (current != NULL)
		{
			tmp = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
