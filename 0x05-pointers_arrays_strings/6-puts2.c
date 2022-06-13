#include "main.h"

/**
 * puts2 - function prints every other character in a string
 * @str: argument parameter to be used in the function
 * Return:0
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
	{
		if ((a % 2) == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}
