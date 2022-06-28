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
	int a = 0;
	int i = 0;
	char *s;

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
		i++;
	}

	return (s);
	free(s);
}
