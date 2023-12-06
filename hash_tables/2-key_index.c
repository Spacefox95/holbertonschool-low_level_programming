#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: the index where key/value should be stored in array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (size == 0)
		return (0);
	index = hash_djb2(key);
	return (index % size);
}
