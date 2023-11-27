#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *
 *
 */

typedef struct lists {
	char *str;
	unsigned int len;
	struct lists *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);


#endif


