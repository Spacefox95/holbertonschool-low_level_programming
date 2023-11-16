#include"function_pointers.h"

/**
 * print_name - function to print a name using function pointer
 * @name: pointer to a string (name) to be printed
 * @f: pointer to a function that takes a char pointer as a parameter
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
		return;
	f(name);
}
