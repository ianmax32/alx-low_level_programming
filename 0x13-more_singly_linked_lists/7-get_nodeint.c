#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node of
 * linked list
 * @head:linked list as an argument
 * @index:index of the node starting at 0
 * Return:0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	a = 0;
	while (head)
	{
		if (a == index)
			return (head);
		a++;
		head = head->next;
	}
	return (NULL);
}
