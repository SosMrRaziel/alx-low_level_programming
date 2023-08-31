#include "main.h"
/**
 * print_binary - prints binary
 * @n: is the number
 */

void print_binary(unsigned long int n)
{
	unsigned long int k = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int f = 0;

	while (k > 0)
	{
	if ((n & k) == k)
	{
		_putchar('1');
		f = 1;
	}
	else if (f)
		_putchar('0');
	k >>= 1;
	}
	if (!f)
		_putchar('0');
}
