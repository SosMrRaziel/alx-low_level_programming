#include "main.h"
/**
 * _isupper - it checks if the c variable is uppercase
 * @c: the variable checked if it is uppercase
 * Return: 1 if c is uppercase 0 if c is not uppercase
 */
int _isupper(int c)
{

char ch_isupper;

	for (ch_isupper = 'A'; ch_isupper <= 'Z'; ch_isupper++)
	{
		if (c == ch_isupper)
	{
		return (1);
	}
	else 
	return (0);
	}

}

