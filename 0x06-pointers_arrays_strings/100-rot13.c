#include "main.h"

/**
 * rot13 - function encodes a string using rot13
 * @s:argument parameter representing the parameter string
 * Return:0
 */

char *rot13(char *s)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		for (b = 'a'; b < 'z'; b++)
		{
			if (s[a] == b || s[a] == (b - 32)
					&& 'z' - b <= 13)
			{
				s[a] = b + 13;
			}
			else
				s[a] = (26 - b) + (b - 13);
		}
	a++;
	}
	return (s);
}	
