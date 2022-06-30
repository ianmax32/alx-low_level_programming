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
	char *x;
	unsigned int a = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);

	while (a < (nmemb * size))
	{
		x[a] = 0;
		a++;
	}
	s = x;
	return (s);
}
