#include "search_algos.h"
/**
 * this function searches for a value
 * in a sorted array of integers using
 * binary search algorithm
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, final = size - 1;

	if (array == NULL)
		return (-1);

	while (start <= final)
	{
		size_t mid = (final - start) / 2 + start;
		size_t a;

		printf("Searching in array: ");
		for (a = start; a < final ; a++)
		{
			printf("%d, ", array[a]);
		}
		printf("%d\n", array[a]);
		if (array[mid] == value)
		{
			return (mid);
		}
		if (value < array[mid])
		{
			final = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	return (-1);
}
