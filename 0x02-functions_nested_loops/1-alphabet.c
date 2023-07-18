#include <stdio.h> 
#include "main.h"


void print_alphabet(void)
{
	char c = 'a';
for (;c <= 'z';)
	{
	_putchar(c);
	c++;
	}
_putchar('\n');
}

int main()
{
print_alphabet();
return 0;
}
