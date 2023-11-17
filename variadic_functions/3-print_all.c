#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
void print_string(va_list args)
{
	char *x;
	x = va_arg(args, char *);
	if (x == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", x);
}

typedef struct op_t
{
	char character;
	void (*f)(va_list);
} type;
void print_all(const char * const format, ...)
{
	char *space = "";
	int i, j = 0;
	va_list args;

	type ops[]={
		{'c', print_char},
		{'d', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(args, format);

	while (format[j] != '\0')
	{
		i = 0;
		while(ops[i].character != '\0')
		{
			if (ops[i].character == format[j])
			{
				printf("%s", space);
				ops[i].f(args);
				space = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(args);
	printf("\n");
}
