#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at index position
 * @h: pointer to the head of the list
 * @idx: index where the node sould be added
 * @n: data for the new node
 * Return: address of the new node, or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 'O')
	{
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	current_node = *h;

	for (i = 0 ; i < idx - 1 ; i++)
	{
		current_node = current_node->next;
	}
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current_node->next;
	new_node->prev = current_node;
	if (current_node->next != NULL)
		current_node->next->prev = new_node;
	current_node->next = new_node;
	return (new_node);
}
