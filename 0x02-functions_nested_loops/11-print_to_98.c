#include "main.h"

/**
 * print_to_98 - method prints natural numbers 
 * up to 98
 * @n: starting value as an argument to the function
 * Return:0
 */

void print_to_98(int n)
{
	int a;

	if ( n <= 98)
	{
		for (a = n ; a <= 98; a++)
		{
			_putchar(a + '0');
			if (a != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		for (a = n; a >=98; a--)
		{
			_putchar(a + '0');
			if (a != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}	
