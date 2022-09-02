#include "lists.h"

/**
 * free_dlistint - function frees a lists
 * @head:pointer to the gead of the lists
 * Return:0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
