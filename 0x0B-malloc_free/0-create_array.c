#include "main.h"



char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	ch = (char*) malloc( size * sizeof(char));
	if ( ch == NULL )
	{
	return (NULL);
	}
	else if (size == 0)
	return (NULL);	
	else
	for ( i = 0 ; i < size; i++)
	ch[i]= c;
	return (ch);
free(ch);
}
