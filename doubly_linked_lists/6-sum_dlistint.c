#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all data
 * @head: pointer to the head of the list
 * Return: sum of data, 0 if no data
 */

int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
		return ('0');

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
