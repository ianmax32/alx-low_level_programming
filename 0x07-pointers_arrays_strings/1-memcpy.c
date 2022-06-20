#include "main.h"

/**
 * _memcpy - function copies memory area
 * @dest:first argument for destination
 * @src:second argument for the source
 * @n:third argument for the bytes from memory area
 * Return:0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
