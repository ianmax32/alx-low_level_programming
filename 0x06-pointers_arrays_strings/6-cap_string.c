#include "main.h"

/**
 * cap_string - function capitalizes all words of a string
 * @s:argument parameter pointing to the address of the string
 * Return:Always 0
 */

char *cap_string(char *s)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		if (s[a] == '\n' || s[a] == '\t' || s[a] == ' '
				|| s[a] == ';' || s[a] == ','
				|| s[a] == '.' || s[a] == '!'
				|| s[a] == '?' || s[a] == '"'
				|| s[a] == '}' || s[a] == '{'
				|| s[a] == '(' || s[a] == ')'
				)
		{
			for (b = 'a'; b <= 'z'; b++)
			{
				if (s[a + 1] == b && a != 0)
				{
					s[a + 1] = b - 32;
				}
				else if (s[a] == b && a == 0)
					s[a] = b - 32;
			}
		}
		a++;
	}
	return (s);
}
