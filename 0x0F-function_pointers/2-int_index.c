#include "function_pointers.h"

/**
 * int_index - function searches for an integer
 * @array:pointer to the array of intergers
 * @size:size of the array
 * @cmp:function pointer that checks the values
 * Return:0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	else
	{
		a = 0;
		while (a < size)
		{
			if (cmp(array[a])
				return (a);
			a++;
		}
	}
	return (-1);
}

