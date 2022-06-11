#include "main.h"

/**
 * print_triangle - prints a triangle in the terminal
 * @size: argument parameter to be used in the function
 * Return:0
 */

void print_triangle(int size)
{
	int a;
	int b;

	for (a = 1; a <= size; a++)
	{
		for (b = size - 1; b > a; b--)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
	}
}
