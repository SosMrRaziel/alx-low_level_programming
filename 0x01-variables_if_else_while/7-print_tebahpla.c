#include <stdio.h>
/**
 * main - print alphabets from (z-a)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char C = 'z';

	while (C >= 'a')
	{
		putchar(C);
		C= C-1;
	}
	putchar('\n');
return (0);
}
