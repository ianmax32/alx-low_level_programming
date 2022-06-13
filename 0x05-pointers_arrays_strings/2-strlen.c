#include "main.h"

/**
 * _strlen - function returns the lenght of a string
 * @s:argument parameter used in the function
 * Return:0
 */

int _strlen(char *s)
{
	int len;
	len = 0;

	while (s[len] != 0)
		len++;

	return (len);
}
