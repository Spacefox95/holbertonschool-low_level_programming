#ifndef VARIADIC_FUNCTION
#define VARIADIC_FUNCTION

typedef struct dt
	{
	    char letter;
	    void (*func)(va_list);
	} datatype;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
