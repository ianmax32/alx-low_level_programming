#include "main.h"

/**
 * leet - function encodes a string to 1337
 * @s:argument parameter representing a string
 * Return:0
 */

char *leet(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == 'a' || s[a] == 'A')
			s[a] = 4;
		if (s[a] == 'e' || s[a] == 'E')
			s[a] = 3;
		if (s[a] == 'o' || s[a] == 'O')
			s[a] = 0;
		if (s[a] == 't' || s[a] == 'T')
			s[a] = 7;
		if (s[a] == 'l' || s[a] == 'L')
			s[a] == 1;
	}
	return (0);
}
