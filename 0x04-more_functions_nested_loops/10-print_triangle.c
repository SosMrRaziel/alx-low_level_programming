#include "main.h"
/**
 * print_diagonal - it draws a diagonal on the tieminal
 * @n: is the number of times the character \ should be printed
 **/
void print_triangle(int size)

{
	int i, j, k;
	
	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
			_putchar(' ');
	}
	for (k = 1; k <= i; k++)
	{
		putchar('#');
	}
	
}
