#include "main.h"


char *_strdup(char *str)
{
	char *strdp;
	unsigned int i ,j;

	if (str == 0)
	return (NULL);

	for ( i = 0; str[i] != '\0'; i++);

	strdp = (char *) malloc(sizeof(char) * (i + 1));

	if (strdp == 0)
	return(NULL);

	for (j = 0; j <= i; j++)
	strdp[j] = str[j];

	return (strdp);

}
