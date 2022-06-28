#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function concatenates two strings
 * @s1:argument parameter representing string 1
 * @s2:argument parameteer representing string 2
 * Return:0
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int a = 0;
	unsigned int i = 0;
	char *s;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	s = malloc(sizeof(*s1 + *s2));

	if (s == NULL)
		return (NULL);

	while (s1[a] != '\0')
	{
		s[a] = s1[a];
		a++;
		i++;
	}

	a = 0;
	while (s2[a] != '\0')
	{
		s[i] = s2[a];
		a++;
	}

	return (s);
	free(s);
}
