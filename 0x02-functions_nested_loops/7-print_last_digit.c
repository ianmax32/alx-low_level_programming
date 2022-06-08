#include "main.h"

/**
 * print_last_digit - method prints the last digit of an integer
 * @c : argumennt value placed in the function as an int
 * Return: 0
 */

int print_last_digit(int c)
{
	if (c > 0 || c == 0)
	{
		_putchar((c % 10) + '0');
		return (c % 10);
	}
	else
	{
		c = -1 * c;
		_putchar((c % 10) + '0');
		return (c % 10);
	}
}
