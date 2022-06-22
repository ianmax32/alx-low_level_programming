#include "main.h"

/**
 * _puts_recursion - function prints a string followed by a new line
 * @s:argument parameter representing string to be printed
 * Return:0
 */

void _puts_recursion(char *s)
{
	int a = 0;

	if (s[a] == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
	_putchar(s[a]);
}
