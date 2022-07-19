#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function frees the list
 * of the listint_t
 * @head:argument parameter representing list head
 * Return:0
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
