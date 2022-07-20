#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function returns the sum of all the data in
 * linked list
 * @head:linked list as an argument
 * Return:0
 */

int sum_listint(listint_t *head)
{
	int a;

	a = 0;
	if (head == NULL)
		return (0);
	while (head)
	{
		a += head->n;
		head = head->next;
	}
	return (a);
}
