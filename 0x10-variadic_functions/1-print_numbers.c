#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - functoin prints numbes followed
 * by a new line
 * @separator:character that seperates the arguments
 * @n:size of the arguments
 * Returns:0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list numbers;

	va_start(numbers, n);

	a = 0;
	while (a < n)
	{
		printf("%d",va_arg(numbers, int));
		if (a < (n - 1) && separator != NULL)
			printf("%s",separator);
		a++;
	}
	printf("\n");
	va_end(numbers);
}

