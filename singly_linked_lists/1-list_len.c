#include "lists.h"

/**
 * list_len - function to print the number of elements in a linked list
 * @h: pointer to the head pf the linked list
 * Return: number of nodes in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
