#include "main.h"

/**
 * binary_to_uint - function converts a binary number
 * to an unsigned int
 * @b:binary number argument
 * Return:0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a;

	if (b == NULL)
		return (0);

	a = 0;
	while (*b)
	{
		a <<= 1;
		if (*b == '0')
		{
			b++;
			continue;
		}
		else if (*b == '1')
		{
			a += 1;
		}
		else
			return (0);
		b++;
	}
	return (a);
}
