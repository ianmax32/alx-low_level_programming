#include "main.h"

/**
 * string_toupper - function changes all the lowercase letters
 * to uppercase
 * @s:argument parameter representing pointer to the string
 * Return:0
 */

char *string_toupper(char *s)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		for (b = 'a'; b < 'z'; b++)
		{
			if (s[a] == b)
				s[a] = b - 32;
		}
		a++;
	}
	return (s);
}
