#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int j;
	va_start(args, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
	j = va_arg(args, int);
		printf("%d", j);
		if (i == n - 1)
			separator = "";
		printf("%s", separator);
		
	}
va_end(args);
printf("\n");
}
