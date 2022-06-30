#include "main.h"
#include <stdlib.h>

/**
 * array_range - function creates an array of integers
 * @min:minimum value in the array
 * @max:maximum value in the array
 * Return:0
 */

int *array_range(int min, int max)
{
	int a;
	int *s;

	if (min > max)
		return (NULL);

	s = malloc(((max - min) + 1) * sizeof(int));

	if (s == NULL)
		return (NULL);

	a = 0;
	while (a < (max - min))
	{
		s[a] = min;
		min++;
		a++;
	}
	return (s);
}
