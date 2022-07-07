#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function prints strings followed
 * by a new line.
 * @separator:seperator for the word arguments
 * @n:number of words in a string
 * Return:0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list words;
	char *word;

	va_start(words, n);

	a = 0;
	while (a < n)
	{
		word = va_arg(words, char *);
		if (word == NULL)
			printf("%s", "nil");
		else
		{
			printf("%s", word);
			if (a < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
		a++;
	}
	printf("\n");
	va_end(words);
}
