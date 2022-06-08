#include <stdio.h>

/**
 *print_to_98 - method prints natural numbers up to 98.
 *@n: starting value as an argument to the function
 *Return:0
 */

void print_to_98(int n)
{
	int a;

	if (n <= 98)
	{
		for (a = n ; a <= 98; a++)
		{
			printf("%d", a);
			if (a != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			if (a != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
