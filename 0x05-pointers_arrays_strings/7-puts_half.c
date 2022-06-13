#include "main.h"

/**
 * puts_half - function prints last half of a string
 * @str: argument parameter to be used in the function
 * Return:0
 */

void puts_half(char *str)
{
	int a;
	int half;

	for (a = 0; str[a] != 0; a++)
	{
	}

	a = a - 1;
	if ((a % 2) == 0)
	{
		half = a / 2;
	}
	else
		half = (a - 1) / 2;

	while (str[half] != 0)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
