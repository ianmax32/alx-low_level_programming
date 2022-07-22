#include "main.h"

/**
 * get_bit - function returns the value of a bit at a
 * given index
 * @n:number
 * @index:index to be returned
 * Return:0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;
	unsigned int size;

	size = (sizeof(long) * 8);
	if (size < index)
		return (-1);
	if (n & (1 << index))
	{
		a = 1;
	}
	else
		a = 0;

	if (a <= 1)
	       return (a);
	return (-1);
}
