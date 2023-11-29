#include "lists.h"

/**
 * add_dnodeint_end - function to add a node at the end of the list
 * @head: pointer to the head of the linked list
 * @n: data of the list
 * Return: the address of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node;
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}

	end_node = *head;

	while (end_node->next != NULL)
	{
		end_node = end_node->next;
	}
	new_node->next = NULL;
	new_node->prev = end_node;
	end_node->next = new_node;
	return (new_node);
}
