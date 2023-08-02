#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: number to calculate the factorial of.
 *
 * Return: factorial of n, -1 if n is less than 0, 1 if n is 0.
*/

int factorial(int n)
{
	if (n == 0)
	return (1);
	if (n < 0)
	return (-1);
	else
	return (n * factorial(n - 1));
}
