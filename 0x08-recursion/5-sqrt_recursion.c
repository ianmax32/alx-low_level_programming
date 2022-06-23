#include "main.h"

/**
 * _sqrt_recursion - function returns the natural square root of a number
 * @n:argument parameter representing the number
 * Return:0
 */

int _sqrt_recursion(int n)
{
	int a = 1;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n == (a * a))
		return (a);
	if (n > (a * a))
	{
		if ((n / 2) > (a * a))
			a = a + 5;
		a = a + 3;
		return (_sqrt_recursion(n));
	}
	else
		return (a);
}
