#include "lists.h"

/**
 * dlistint_t - function to add a node at the end of the list
 * @n: data of the list
 * Return: the address of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next= NULL;
	
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	end_node = *head;

	while (end_node->next != NULL)
	{
		end_node = end_node->next;
	}
	end_node->next = new;
	return (new);
}
