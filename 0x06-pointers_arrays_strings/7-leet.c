#include "main.h"

/**
 * leet - function encodes a string to 1337
 * @s:argument parameter representing a string
 * Return:0
 */

char *leet(char *s)
{
	int a = 0;
	char b[5] = {'a','e','o','t','l'};
	char c[5] = {'4','3','0','7','1'};
	int i;

	while (s[a] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[a] == b[i] || s[a] == (b[i] - 32))
				s[a] = c[i];
		}	
	}
	return (s);
}
