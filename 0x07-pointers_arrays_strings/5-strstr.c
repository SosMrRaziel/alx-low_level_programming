#include "main.h"



char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
	char *i = haystack;
	char *j = needle;

	while (*haystack && *j && *haystack == *j)
	{
		haystack++;
		pattern++;
	}
	if (!*pattern)
		return (i);

	haystack = i + 1;
	}
	return (0);
}
