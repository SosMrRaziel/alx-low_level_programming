#include <stdio.h>
/**
*main - it print from 0 tp 9 with comma and spaces without the 9
*
*
*Return: Always 0 (Success)
**/

int main(void)
{

int nm = 48;
for (; nm < 58 ; nm++)
	{
	putchar(nm);
		if (nm != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
putchar('\n');
return (0);
}
