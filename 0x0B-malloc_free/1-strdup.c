#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a newly allocated space
 * in memory which contains a copy of the string gven as a parameter
 * @str:argument paramater used to represent a string
 * Return:0
 */

char *_strdup(char *str)
{
	unsigned int a = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(str));

	if (s == NULL)
		return (NULL);

	while (str[a] != '\0')
	{
		s[a] = str[a];
		a++;
	}

	return (s);
}
