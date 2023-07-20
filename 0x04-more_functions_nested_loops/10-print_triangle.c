i#include "main.h"
/**
 * print_diagonal - it draws a diagonal on the tieminal
 * @n: is the number of times the character \ should be printed
 **/
void print_triangle(int size)

{
	int i, j;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
		_putchar('#');
		}
	_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
