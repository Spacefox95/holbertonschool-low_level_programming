#include "lists.h"

/**
 * add_node - function to add a new node in the single linked list
 * @head: pointer to the head of the linked list
 * @str: pointer to the new element added
 * Return: address of the new element, or NULL if it failed
 */


list_t *add_node(list_t **head, const char *str)
{
	int length;
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	for (length = 0 ; str[length] ; length++)
		;

	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
