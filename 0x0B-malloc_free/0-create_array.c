#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates an array of chars and initializes
 * it with a speific char
 * @size-argumnent paramater for size
 * @c-char to initialize
 * Return:0
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int a = 0;

	if (size == 0)
		return (NULL);
	
	s = malloc(sizeof(char) * size);
	while (a < size)
	{
		if (s == NULL)
			return (NULL);

		s[a] = c;
		a++;
	}
	return (s);
}
