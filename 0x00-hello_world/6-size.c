#include <stdio.h>
/**
** Autr SosMrRaziel
** main - will print size of character, intengers, long int, long long int and floats
** Return 0 if it (Succsess)
**/


int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %f byte(s)\n", sizeof(float));

return (0);
}
