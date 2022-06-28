#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns a pointer to a 2 dimensional
 * array of integers
 * @width:argument parameter representing width
 * @height:second argument parameter for width of the array
 * Return:0
 */

int **alloc_grid(int width, int height)
{
	unsigned int a = 0;
	char *s;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(width * height);

	if (s == NULL)
		return (NULL);

	while (a < (width * height))
	{
		s[a] = 0;
		a++;
	}

	return (s);
}
