#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all elements in a list
 * list_t
 *@h:liinked list parsed
 *Return:0
*/

size_t print_list(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", h->len, "(nil)");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		counter++;
		h = h->next;
	}
	return (counter);
}


