#include "main.h"



void print_rev(char *s)
{
	int i = 0;
	for (; *s != '\0'; s++, i++){
	} 
	for (;i >= 0; i--, s--)
	{
	_putchar(*s);
	}
_putchar('\n');
	
}
