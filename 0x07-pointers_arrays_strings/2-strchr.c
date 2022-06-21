#include "main.h"

/**
 * _strchr - function locates a character in a string
 * @s:argument parameter representing a string
 * @c:character to locate
 * Return:0
 */

char *_strchr(char *s, char c)
{
	if (c == *s)
		return (s);
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return ('\0');
}
