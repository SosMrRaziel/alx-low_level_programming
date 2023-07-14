#include <stdio.h>
/**
* main - print alphabets from (a-z)
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
return (0);
}
