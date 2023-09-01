#include "main.h"
/**
* set_bit - sets a bit at a given index to 0
* @n: pointer to the number to change
* @index: index of the bit to set to 0
*
* Return: 1 for success, -1 for failur
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = (~(1UL << index) & *n);
return (1);
}
