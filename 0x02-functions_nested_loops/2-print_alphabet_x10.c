#include "main.h"
/**
 *  print_alphabet_x10 - it print from a to z 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int l, c;
	for (l = 0; l <= 9; l++)
	{
		for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
		_putchar('\n');
	}
}


