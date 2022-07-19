#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2- function frees the list
 * of the listint_t
 * @head:argument parameter representing list head
 * Return:0
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (*head)
	{
		node = *head;
		*head = node->next;
		free(node);
	}
}
