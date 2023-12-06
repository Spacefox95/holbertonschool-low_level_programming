#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_create - function to create a hash table
 * @size: size of the array
 * Return: pointer to the new hashtable, NULL if false
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size > 0)
	{

		table = malloc(sizeof(hash_table_t));
		if (table == NULL)
			return (NULL);
		table->size = size;
		table->array = malloc(sizeof(hash_node_t *) * size);
		if (table->array == NULL)
		{
			free(table);
			return (NULL);
		}
		for (i = 0 ; i < size ; i++)
			table->array[i] = NULL;
		return (table);
	}
	return (NULL);
}
