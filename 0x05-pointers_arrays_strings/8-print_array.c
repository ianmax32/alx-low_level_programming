#include "main.h"
#include <stdio.h>

/**
 * print-array - function prints n elements of the array
 * @a: first argument parameter representing array
 * @n: number of elements to be printed
 * Return:0
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i <= (n-1))
		{
			printf("%d, ", a[i]);
		}
		else
			prinf("%d", a[i]);
		i++;
	}
}
