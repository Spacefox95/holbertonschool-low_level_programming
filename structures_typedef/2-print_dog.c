#include<stdio.h>
#include<stdlib.h>
#include"dog.h"

/**
 * print_dog - display paramters of dog
 * @d: pointer to parameters
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL && d->owner != NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	if (d->owner == NULL && d->name != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: (nil)\n");
	}
	if (d->name == NULL && d->owner == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		printf("Owner: (nil)\n");
	}
	else if (d->name != NULL && d->owner != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
