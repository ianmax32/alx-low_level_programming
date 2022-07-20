#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function prints all the elements
 * of the listint_t
 * @h:argument parameter representing list
 * Return:0
 */

size_t print_listint(const listint_t *h)
{
	size_t a;

	a = 0;
	while (h->next)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}

	return (a);
}
