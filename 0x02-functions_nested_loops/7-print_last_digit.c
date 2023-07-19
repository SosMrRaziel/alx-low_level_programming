#include "main.h"


int print_last_digit(int n)
{
	int ld = n % 10;
	if ( ld < 0)
	ld = (-1) * ld;
	_putchar(ld + 0);
	return (ld);
}
	
