#include "main.h"

/**
 * print_rev - function prints a string in reverse.
 * @s: argument paramter ro be used as the string
 * Return:0
 */

void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != 0; a++)
	{
	}

	while (a >= 0)
		_putchar(s[a]);
	_putchar('\n');
}
