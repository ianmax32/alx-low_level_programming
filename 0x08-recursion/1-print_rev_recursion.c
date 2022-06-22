#include "main.h"

/**
 * _print_rev_recursion - function prints a string in reverse
 * @s:argument parameter representing the string
 * Return:0
 */

void _print_rev_recursion(char *s)
{
	int a = 0;

	if (s[a] == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[a]);
}
