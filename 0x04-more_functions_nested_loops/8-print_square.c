#include "main.h"

/**
 * print_square - function prints a square in the terminal
 * @size:argument parameter to be used in the function
 * Return:0
 */

void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		while (a < size)
		{
			while (b < size)
			{
				_putchar('#');
				b+=1;
			}
			b = 0;
			a+=1;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
