#include "lists.h"

/**
 * sum_dlistint- function returns the sum of all data in
 * the list
 * @head:pointer to the head of the list
 * Return:0
 */

int sum_dlistint(dlistint_t *head)
{
	int total;

	total = 0;
	if (!head)
		return (total);

	while (head)
	{
		total = total + head->n;
		head = head->next;
	}

	return (total);
}
