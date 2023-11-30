#include "lists.h"

/**
 * delete_dnodeint_at_index - function that delete a node at index position
 * @head: pointer to the first node
 * @index: index of the node that must be deleted
 * Return: 1 if success, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *del_node, *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		del_node = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(del_node);
		return (1);
	}
	del_node = *head;

	for (i = 0 ; i < index - 1 ; i++)
		del_node = del_node->next;
	if (del_node == NULL || del_node->next == NULL)
		return (-1);
	temp = del_node->next;

	del_node->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = del_node;
	free(temp);
	return (1);
}
