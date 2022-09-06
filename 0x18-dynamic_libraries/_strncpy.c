#include "main.h"

/**
 * _strncpy - function copies a string
 * @dest:first argument parameter as destination
 * @src:second argument parameter as source
 * @n:number of bytes to copy
 * Return:0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
		b++;
	}

	while (b != n)
		dest[b++] = '\0';
	return (dest);
}
