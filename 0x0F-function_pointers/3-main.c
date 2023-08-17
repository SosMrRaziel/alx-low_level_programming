#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	int (*op)(int, int);

	if (argc !=4)
	{
	printf("Error\n");
	exit(98);
	}
	op = get_op_func(argv[2]);
	
	if (!op)
	{
	printf("Error\n");
	exit(99);
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[3]);

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && b== 0)
	{
	printf("Error\n");
	exit(100);
	}
	printf("%d\n", op(a, b));
	return (0);
}

