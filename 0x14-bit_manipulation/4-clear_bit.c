#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0 at a
 * given index
 * @n:number
 * @index:index to be returned
 * Return:0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;
	unsigned int a; 

	a = 0;
	size = (sizeof(long) * 8);
	if (size < index)
		return (-1);
	if (*n &= ~(1 << index))
	{
		a = 1;
	}
	
	return (a);
}
