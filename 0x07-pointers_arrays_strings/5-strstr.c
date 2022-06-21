#include "main.h"

/**
 * _strstr - function locates a substring
 * @haystack:argument parameter respresenting the string
 * @needle:argument paremeter representing the substring
 * Return:0
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	char *b;
	char *c;

	while (*haystack != '\0')
	{
		b = haystack;
		c = needle;
		a = 0;
		while (haystack[a] == needle[a] && needle[a] != '\0'
				&& haystack[a] != '\0')
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
