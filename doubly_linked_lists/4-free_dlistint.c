#include "lists.h"

/**
 * free_dlistint - function that frees the linked list
 * @head: pointer to the first element of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
