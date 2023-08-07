#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string
 * or NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
	char *strdp;
	unsigned int i, j;

	if (str == 0)
	return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{}
	strdp = (char *) malloc(sizeof(char) * (i + 1));

	if (strdp == 0)
	return (NULL);

	for (j = 0; j <= i; j++)
	strdp[j] = str[j];

	return (strdp);

}
