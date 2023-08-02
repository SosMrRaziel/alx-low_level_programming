#include "main.h"

void _puts_recursion(char *s)
{
	if (*s != "\0")
	_puts_recursion(char *s);

	else
	_putchar(*s);
}
