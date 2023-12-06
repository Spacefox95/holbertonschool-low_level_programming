#include "hash_tables.h"
#include <stddef.h>

/**
 * hash_table_create - function to create a hash table
 * @size: size of the array
 * Return: pointer to the new hashtable, NULL if false
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	
	if (size == '\0')
		return (NULL);
	
	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;

	return (table);
}
