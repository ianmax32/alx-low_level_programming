#include "lists.h"

/**
 * print_dlistint - functiob prints elements of a list
 * @h:paramener representing list
 * Return:0
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t a;

	a = 0;
	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
