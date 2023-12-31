#include "main.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of chars from string 2
 * Return: pointer to concatenated string or NULL on failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n >= l2)
		n = l2;
	s = (char *) malloc(sizeof(char) * (l1 + n + 1));
		if (s == NULL)
			return (NULL);

	for (i = 0; i < l1; i++)
		s[i] = s1[i];

	for (j = 0; j < n; j++)
		s[i + j] = s2[j];

	s[i + j] = '\0';
return (s);
}

