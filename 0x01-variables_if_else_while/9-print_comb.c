#include <stdio.h>


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
