#include "main.h"

/**
 * cap_string - function capitalizes all words of a string
 * @s:argument parameter pointing to the address of the string
 * Return:0
 */

char *cap_string(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == '\n' || s[a] == '\t' || s[a] == ' ')
			s[++a] = s[++a} - 32;
	}
	return (0);
}
