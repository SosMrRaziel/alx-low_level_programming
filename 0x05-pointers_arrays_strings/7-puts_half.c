#include "main.h"



void puts_half(char *str)
{
	int i, len = 0;

	while (str[len])
		len++;

	for (i = (len + 1) / 2; i < len; i++)
		putchar(str[i]);

	putchar('\n');
}
