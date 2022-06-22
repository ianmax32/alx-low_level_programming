#include "main.h"

/**
 * _strlen_recursion - function returns the length of a string
 * @s:argument parameter representing the string
 * Return:0
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (s[a] == '\0')
		return (len);

	len++;
	return(_strlen_recursion(s) + 1);
}
