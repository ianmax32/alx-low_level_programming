#include "main.h"

/**
 * rev_string - function reverses a string
 * @s: argument parameter to be used in the function
 * Return:0
 */

void rev_string(char *s)
{
	int a;
	int b;
	char c;

	for (a = 0; s[a] != 0; a++)
	{
	}

	a = a - 1;
	b = 0;
	while (a >= 0)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a--;
		b++;
	}
}

