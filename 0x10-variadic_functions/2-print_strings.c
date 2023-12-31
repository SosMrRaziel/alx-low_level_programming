#include "variadic_functions.h"
/**
* print_strings -  prints strings, followed by a new line.
* @separator: the string to be printed between the strings
* @n: the number of strings passed to the function
*
* Return: always (0)
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i == n - 1)
			separator = "";
		printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
