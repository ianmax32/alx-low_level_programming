#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint- function adds a node to the head
 * of the listint_t
 * @head:argument parameter representing list head
 * @n:number of elements
 * Return:0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listsint_t));
	if (node == NULL)
		return (NULL);

	node->next = *head;
	node->n = n;
	*head = node;
	return (*head);
}
