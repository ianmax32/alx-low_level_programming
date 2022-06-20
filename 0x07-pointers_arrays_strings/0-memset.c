#include "main.h"

/**
 * _memset - function that filles memory with a constant byte
 * @s:first argument  parameter for the funtion
 * @b:second argument function
 * @n:third argument parameter for the byte
 * Return:0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}

