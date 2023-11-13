#ifndef Doggy
#define Doggy
#include<stdlib.h>
#include<stdio.h>
/**
 * struct dog - struct about a dog
 * @name: ok
 * @age: ok
 * @owner: ok
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * my_dog - current dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dig
 * Return: pointer to dog infos
 */

struct dog my_dog(char *name, float age, char *owner)
{
	struct dog *my_dog;

	my_dog = malloc(sizeof(struct dog));

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (*my_dog);
}

#endif
