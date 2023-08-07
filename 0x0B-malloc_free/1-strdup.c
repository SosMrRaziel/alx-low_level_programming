#include "main.h"


char *_strdup(char *str)
{
	char *strdp;
	unsigned int i;

	if (str == 0)
	return (NULL);

	for ( i = 0; strdp[i]; != '\0'; i++)
	{
	strdp = (char *) malloc(sizeof(char) * i);
	if (strdp == 0)
	return(NULL);
	}



}
