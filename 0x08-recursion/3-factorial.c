#include "main.h"


int factorial(int n)
{
	if ( n == 0)
	return (1);
	if ( n < 0)
	return (-1);

factorial(n - 1);
}
