#include "main.h"


char *_strchr(char *s, char c)
{
	for (;*s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
	return(s);
	}
	return (NULL);
}
