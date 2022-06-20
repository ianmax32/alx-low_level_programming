#include "main.h"

/**
 * _strchr - function locates a character in a string
 * @s:argument parameter representing a string
 * @c:character to locate
 * Return:0
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == c)
			return (*s[a]);
		a++;
	}

	return NULL;
}
