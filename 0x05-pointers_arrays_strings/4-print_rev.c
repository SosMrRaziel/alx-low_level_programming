#include "main.h"



void print_rev(char *s)
{
	int i = 0;
	int* r;

	for (; s[i] != '\0'; i++)
	{
		for (*r = *s; *r > -1; *r--)
		{
		_putchar(*r);
		}
	}
_putchar('\n');
	
}