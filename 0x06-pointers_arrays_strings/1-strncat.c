#include "main.h"

/**
 * strncat - function concatenates two strings using n bytes
 * @dest:first agumrnt parameter as the destination
 * @src:second argument parameter as the source
 * @n:number of bytes to use
 * Return:0
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
