#ifndef DOG_H
#define DOG_H
#include<stdlib.h>
#include<stdio.h>


/**
 * struct dog - struct about a dog
 * @name: ok
 * @age: ok
 * @owner: ok
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
