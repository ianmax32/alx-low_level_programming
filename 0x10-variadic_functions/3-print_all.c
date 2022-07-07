#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function prints anything.
 * Return:0
 */

void print_all(const char * const format, ...)
{
	unsigned int a;
	unsigned int x;
	char c;
	int i;
	float f;
	char *s;
	va_list args;
	void *arg;
	
	va_start(args, format);
	a = 0;
	while (a >= 0)
	{
		arg = &va_arg(args, format);
		
		if ((char*)arg == NULL)
			printf("nil");
		if (arg != (char*)arg)
			printf(arg);
		x = 0;
		while (arg[x] != '\0')
		{
			printf("%s", arg[x]);
			x++;
		}

		a++;
	}
	printf("\n");
	va_end(args);
}
