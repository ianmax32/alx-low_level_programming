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
	int b;
	int c;

	while (haystack[a] != '\0')
	{
		b = 0;
		while (haystack[a] == needle[a] && needle[a] != '\0' && haystack[a] != '\0')
		{
				b++;
				c++;
		}

		if (needle == '\0')
			return (b);
		a++;
	}
	return (NULL);
}
			
