#include"dog.h"
#include<stdio.h>

/**
 * free_dog - free parameters of strct dog
 * @d: parameter
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
