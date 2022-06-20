#include "main.h"

/**
 * _strpbrk - function seraches a string for any of a se of bytes
 * @s:argument parameter that points to a string
 * @accept:argument parameter that points to bytes
 * Return:0
 */

char *_strpkbr(char *s, char *accept)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (s[a] != '\0')
	{
		b = 0;
		c = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
				c++;
			b++;
		}
		if (c != 0)
			return (s + a);
		a++;
	}
	return (0);
}
