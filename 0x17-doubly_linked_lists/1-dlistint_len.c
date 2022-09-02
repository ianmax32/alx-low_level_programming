#include "lists.h"

/**
 * dlistint_len- function returns the number of lements of a list
 * @h:paramener representing list
 * Return:0
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t a;

	a = 0;
	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
