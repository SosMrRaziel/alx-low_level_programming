#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters
 * @...: the variadic parameters
 *
 * Return: the sum of all parameters, or 0 if n is 0
*/


int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	sum = sum + va_arg(args, int);

	va_end(args);
return (sum);
}
