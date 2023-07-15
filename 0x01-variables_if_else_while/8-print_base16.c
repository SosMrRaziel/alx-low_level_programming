#include <stdio.h>
/**
 * main - print from 1 to f
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nm = 48;
	char ch = 97;

	for (; nm <= 57 ;)
	{
		putchar(nm);
		nm++;
	}
	for (; ch <= 102 ;)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
return (0);
}
