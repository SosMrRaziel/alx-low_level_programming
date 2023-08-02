#include "main.h"

void _print_rev_recursion(char *s)
	if (*s == 0)
		return (0);

	else
		putchar(s);
		_print_rev_recursion(*s - 1)
		putchar('\0');
