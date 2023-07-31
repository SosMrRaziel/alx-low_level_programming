#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer to beginning of substring or NULL if not found
*/


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
