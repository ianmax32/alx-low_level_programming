#include "main.h"

/**
 * _strcpy - function coppied the string pointed from one
 * pointer to another pointer.
 *
 * @dest:first argument parameteer representing destination
 * @src:second argument parameter representing source
 *
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] <= 0; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
