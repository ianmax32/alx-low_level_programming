#include "main.h"

/**
 * reverse_array - function reverses the contents of an array of integers
 * @a:argument parameter reresenting the pointer to the array
 * @n:number of elements in the array
 * Return:0
 */

void reverse_array(int *a, int n)
{
	int i;
	int b = 0;

	n = n - 1;
	while (b < n)
	{
		i = a[n];
		a[n] = a[b];
		a[b] = i;
		b++;
		n--;
	}
}
