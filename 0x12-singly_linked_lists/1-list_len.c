#include "list.h"
#include <stdio.h>

/**
 * list_len - function that counts all elements in a list
 * list_t
 *@h:liinked list parsed
 *Return:0
*/

size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}


