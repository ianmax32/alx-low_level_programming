#include "function_pointers.h"

/**
 * array_iterator - function executes a function given as
 * a parameter on each element of the array.
 * @array:pointer to the array
 * @size:size of the array
 * @action:pointer to the function needed to be used
 * Return:0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	a = 0;
	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
