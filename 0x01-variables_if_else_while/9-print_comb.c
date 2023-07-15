#include <stdio.h>


int main(void)
{

int nm = 48;
char c = 44;
char s = 32;
for (; nm < 58 ; nm++)
	{
	putchar(nm);
		if (nm != 57)
		{
		putchar(c);
		putchar(s);
		}
	}
putchar('\n');
return (0);
}
