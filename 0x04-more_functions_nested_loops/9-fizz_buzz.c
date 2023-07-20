#include <stdio.h>
/**
 * main - prints numbers from 0 to 100
 *
 * Return: always 0
 */

int main()
{
	int i;
	for (i = 1 <= 100; i++)
	{
		if (i % 5 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ")
		}
		else
			printf("%d ", i);
	}
putchar('\n');
return (0);
}
