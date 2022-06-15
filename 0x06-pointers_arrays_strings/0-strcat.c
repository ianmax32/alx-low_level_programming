#include "main.h"

/**
 * _strcat - function concatenates two strings
 * @dest:first argumemt parameter to be used in the function
 * @src:second argument to be used as the source in the function
 * Return:0
 */

char *_strcat(char *dest, char*src)
{
	int i = 0;
	int j = 0;

	while (dest[a] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
