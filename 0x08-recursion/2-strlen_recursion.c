#include "main.h"

/**
 * _strlen_recursion - function returns the length of a string
 * @s:argument parameter representing the string
 * Return:0
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (s[len] == '\0')
		return (0);

	len++;
	return (1 + _strlen_recursion(s));
}
