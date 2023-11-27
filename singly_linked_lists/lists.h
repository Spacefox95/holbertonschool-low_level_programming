#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct lists - structure for a linked list
 * @str: string data in the node
 * @len: lengh of the string
 * @next: pointer to the next node in the struct
 */

typedef struct lists
{
	char *str;
	unsigned int len;
	struct lists *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif


