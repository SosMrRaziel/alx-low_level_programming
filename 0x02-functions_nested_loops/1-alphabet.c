#include "main.h"
/**
 * print_alphabet - print alphabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c = 'a';
for (; c <= 'z' ;)
	{
	_putchar(c);
	c++;
	}
_putchar('\n');
}
