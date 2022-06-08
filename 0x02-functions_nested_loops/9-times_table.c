#include "main.h"

/**
 * times_table - method prints the 9 times table
 *
 * Return :0
 */

void times_table(void)
{
	int a;
	int i;
	int c;

	for (a = 1; a <= 9; a++)
	{
		for ( i = 1; i < 9; i++)
		{
			c = a * i;
			_putchar(c);
			if (a < 9 || i <9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
