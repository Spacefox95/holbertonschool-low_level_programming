#include "lists.h"

/**
 * add_node_end - add a node a the end of the list
 * @head: pointer to the head of the linked list
 * @str: pointer to the new element added
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t length = 0;

	list_t *new;
	list_t *last_node;

	new = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	while(str[length])
		length++;

	new->str = strdup(str);
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	last_node = *head;

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new;
	return (new);
}
