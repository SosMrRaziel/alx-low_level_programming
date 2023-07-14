#include <stdio.h>
/**
 * main - count from 0 to 9 uisng putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int a = '0';
	for (; a <= '9' ;)
	{
	putchar(a);
	a++;
	}
	putchar('\n');
return (0);
}
