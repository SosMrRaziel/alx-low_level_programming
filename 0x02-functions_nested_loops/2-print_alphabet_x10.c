#include "main.h"

void print_alphabet_x10(void)
{
char c;
int n;
	for(c = 'a'; c <= 'z'; c++)
	{
		for(n = 0; c <= 10; n++)
		_putchar(c);
	}
_putchar('\n');
}


