#include "main.h"

/**
 * _strspn - function gets the length of a prefix substring
 * @s:argument parameter representing string
 * @accept:argument parameter representing bytes
 * Return:0
 */

unsigned int _strspn(char *s, char *accept)
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
			a++;
	}
	return (a);
}
