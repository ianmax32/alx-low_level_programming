#include "main.h"

/**
 * swap_int - function swaps the values of two integers.
 * @a: first argument parameter.
 * @b: second argument parameter.
 * Return:0
 */

void swap_int(int *a, int *b)
{
	int *param = *a;
	*a = *b;
	*b = *param;
}
