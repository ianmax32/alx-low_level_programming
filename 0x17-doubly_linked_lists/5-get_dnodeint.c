#include "lists.h"

/**
 * get_dnodeint_at_index- function returns the nth node
 * of a linked lists
 * @head:point to the head of the lists
 * @index:index to return from the lusts
 * Return:0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a;

	a = 0;
	while (head)
	{
		if (a == index)
			return (head);
		head = head->next;
		a++;
	}
	return (NULL);
}
