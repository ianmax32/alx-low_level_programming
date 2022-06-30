#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory of an array using calloc
 * @nmemb:array of elements
 * @size:size in bytes of each element of the array
 * Return:0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);

	setmem(s, (nmemb * size), 0);

	return (s);
}

/**
 * setmem - function to set memory
 * @s:array to set memory
 * @size:seize of the memory
 * @value:value to set
 * Return:s
 */

char *setmem(char *s, unsigned int size, char value)
{
	unsigned int a = 0;

	while (a < size)
	{
		s[a] = value;
		a++;
	}
	return (s);
}
