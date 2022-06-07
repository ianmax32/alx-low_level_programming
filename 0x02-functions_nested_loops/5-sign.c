#include "main.h"
/**
 * print_sign - method returns 1 is c is lower or
 * o if not.
 * @n: argument to be used in the function
 *Description: return either 1 is lower or 0 if not
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
