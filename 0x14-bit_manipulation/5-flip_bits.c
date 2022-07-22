#include "main.h"

/**
 * flip_bits - function returns the number of bits you would
 * need to flip to get from one number to the other
 * @n:first number
 * @m:second number to get to
 * Return:0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a; 
	unsigned long int b;

	a = 0;
	b = m ^ n;
	
	while (b > 0)
	{
		if (1 & b)
			a++;
		b >>= 1;
	}
	
	return (a);
}
