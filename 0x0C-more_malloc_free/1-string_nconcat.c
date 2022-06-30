#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function concatenates two strings
 * @s1:first string argument
 * @s2:second argument string
 * @n:size of memory
 * Return:0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int a = 0;
	unsigned int b = 0;

	s = "";
	if (s1 == NULL)
		s1 = s;

	if (s2 == NULL)
		s2 = s;
	while (s1[a] != '\0')
		a++;

	s = malloc(a + (n + sizeof(*s2) + 1) * sizeof(s));

	if (s == NULL)
		return (NULL);

	a = 0;
	while (s1[a] != '\0')
	{
		s[a] = s1[a];
		a++;
	}

	while (b < n && s2[b] != '\0')
	{
		s[a] = s2[b];
		a++;
		b++;
	}

	s[a] = '\0';
	return (s);
}
