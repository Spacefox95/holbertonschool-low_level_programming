#include "lists.h"

/**
 * dlistint_t *add_dnodeint - funciton a add a new node
 * at the beginning of the linked list
 * @head : pointer to the head of the linked lsit
 * @n : the elements of the structure
 * Return: address of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node=malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
