#include <stdio.h>
/**
 * main - print alphabets from (a-z)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char C = 'a';

	while (C <= 'z')
	{
		putchar(C);
		C = C + 1;
	}
	putchar(\n);
return (0);
}
