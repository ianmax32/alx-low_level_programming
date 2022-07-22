#include "main.h"

/**
 * print_binary - function prints the binary representation
 * of a number
 * @n:number to be printed as binary
 * Return:0
 */

void print_binary(unsigned long int n)
{
	if (n != 0)
	{
		print_binary(n >> 1);
		if (n & 1)
			_putchar('1');
		else
			_putchar('0');
	}

	if (n <= 1)
	{
		_putchar(n + '0');
	}
}
