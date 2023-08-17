#include "variadic_functions.h"


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
 /*	char s = 44; */
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
	if (separator != NULL && i < n - 1)
		printf("%c ", 44 );
	}
va_end(args);
printf("\n");
}
