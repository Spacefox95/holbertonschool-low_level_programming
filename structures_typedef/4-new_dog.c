#include<stdio.h>
#include"dog.h"

/**
 * _strdup - fction to copy a string
 * @str: the destination of the copy
 * Return: Success
 */

char *_strdup(char *str)
{
	char *tmp;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	tmp = malloc((len + 1) * sizeof(*tmp));
	if (tmp == NULL)
		return (NULL);
	for (i = 0 ; i < len ; i++)
		tmp[i] = str[i];
	tmp[len] = '\0';
	return (tmp);
}
/**
 * new_dog - function to create a new dog
 * @name: name of the dog
 * @age: age
 * @owner: owner
 * Return: Success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
		return (NULL);
	new_dog_ptr->name = _strdup(name);
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}
	new_dog_ptr->owner = _strdup(owner);
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}
	new_dog_ptr->age = age;
	return (new_dog_ptr);
}
