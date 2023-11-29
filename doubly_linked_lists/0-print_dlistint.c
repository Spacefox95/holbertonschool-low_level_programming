#include "lists.h"

/**
 * print_dlistint - function that print a double linked list
 * @h: elements of the list
 * Return: number of nodes of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
