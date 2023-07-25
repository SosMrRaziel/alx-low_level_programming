#include "main.h"



void puts_half(char *str)
{
	int i, j = 0;

	for(; str[j] != '\0'; j++)
	{
	}	

	for (i = (j + 1) / 2; i < j; i++)
		_putchar(str[i]);

	_putchar('\n');
}
