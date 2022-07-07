#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function returns the sum of all the
 * parameters
 * @n:number of parameters
 * Return:0
 */

int sum_them_all(const unsigned int n, ...)
{
	int a;
	int sum;
	va_list numbers;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	a = 0;
	sum = 0;

	while (a < n)
	{
		sum += va_arg(numbers, int);
		a++;
	}

	va_end(numbers);
	return (sum);
}
