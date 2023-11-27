#include "lists.h"

/**
 * free_list - free the memory allocation of the list
 * @head: the list to free
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
