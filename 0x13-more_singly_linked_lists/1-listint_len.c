#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function returns number of the elements
 * of the listint_t
 * @h:argument parameter representing list
 * Return:0
 */

size_t listint_len(const listint_t *h)
{
	size_t a;

	a = 0;
	while (h)
	{
		h = h->next;
		a++;
	}

	return (a);
}
