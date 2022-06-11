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
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
