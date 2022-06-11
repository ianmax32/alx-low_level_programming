#include "main.h"

/**
 * print_diagonal - function draws a diagonal line in the terminal
 * @n:this is the number of times the character \ will be printed
 * Return:0
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n != 0 && n > 0)
	{
		for (b = 0; b < n; b++)
		{
			for (a = 0; a < b; a++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
