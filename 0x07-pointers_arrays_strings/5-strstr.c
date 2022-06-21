#include "main.h"

/**
 * _strstr - function locates a substring
 * @haystack:argument parameter respresenting the string
 * @needle:argument paremeter representing the substring
 * Return:0
 */

char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *b = haystack;
		char *c = needle;

		while (*c == *b && *c != '\0'
				&& *b != '\0')
		{
				b++;
				c++;
		}

		if (*c == '\0')
			return (b);
		haystack = b + 1;
	}
	return (NULL);
}
