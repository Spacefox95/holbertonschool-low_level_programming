#include "hash_tables.h"

/**
 * hash_table_get - function that retrieve a value associated with a key
 * @ht: the hash table
 * @key: the key we are looking for
 * Return: the value associated, NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			if (current->value == NULL)
				return (NULL);
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
