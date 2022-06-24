#include "main.h"

/**
 * _puts - function prints a string followed by new line.
 * @str: argument parameter to be used in the function
 * Return:0
 */

void _puts(char *str)
{
	int a;

	a = 0;
	while (str[a] != 0)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
