#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - functiondeletes the head node of the list
 * linked list and returns the head node's data
 * @head:linked list as an argument
 * Return:0
 */

int pop_listint(listint_t **head)
{
	int a;
	listint_t *node;

	node = *head;
	if (*head == NULL)
		return (0);

	a = node->n;
	*head = (*head)->next;
	free(node);
	node = NULL;
	return (a);
}
