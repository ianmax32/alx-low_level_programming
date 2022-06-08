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

	for (a = 0; a <= 9; a++)
	{
		for ( i = 0; i <= 9; i++)
		{
			c = a * i;
			if ( c >= 10)
			{
				printf("%d", c);
			}
			else
			{	
			printf("%d", c);
			}
			if (i < 9)
			{
			printf(", ");
			}
		}
		printf("\n");
	}
}
