#include "lists.h"

/**
 * dlistint_len - function that return number of elements
 * in the linked list
 * @h: elements of the linked list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
