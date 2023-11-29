#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the node at specific position
 * @head: pointer to the head of the list
 * @index: an unsigned int representing the position of the node
 * Return: pointer to the nth node, else NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *index_node;

	if (head == NULL)
		return (NULL);

	index_node = head;

	while (index_node != NULL && index > 0)
	{
		index_node = index_node->next;
		index--;
	}
	return (index == 0 ? index_node : NULL);
}
