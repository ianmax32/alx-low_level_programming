#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end- function adds a node to the end
 * of the listint_t
 * @head:argument parameter representing list head
 * @n:number of elements
 * Return:0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *nodeTemp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	nodeTemp = *head;
	while (nodeTemp)
		nodeTemp = nodeTemp->next;

	node->next = NULL;
	node->n = n;
	nodeTemp->next = node;
	return (*head);
}
