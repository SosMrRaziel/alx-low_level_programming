#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - it checks if the c variable is digite
 * @c: the variable checked if it is digit
 * Return: 1 if c is digit 0 if c is not digit
 */

int _isdigit(int c)
{
	while (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
int main (int argc, char *argv[])
{
	int i , sum = 0;
	char *p = argv;

	for ( i = 1; i < argc; i++)
	{
		if (!_isdigit(*p))
		{
		printf("Error\n");
		return (1);
		}
			else
			{
			sum += atoi(*p);
			printf("%d\n", sum);
			}
	}
return (0);
}

