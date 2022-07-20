#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts a new node in
 * linked list at a given position
 * @head:linked list as an argument
 * @idx:index of the node starting at 0
 * @n:value to be inserted
 * Return:0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *node, *tempNode;

	if (idx > 0 && *head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	tempNode = *head;
	if (idx == 0)
	{
		node->n = n;
		node->next = tempNode;
		*head = node;
		return (node);
	}

	a = 0;
	while (tempNode)
	{
		if (a == idx)
		{
			node->n = 0;
			node->next = tempNode->next;
			tempNode->next = node;
			return (node);
		}
		a++;
		tempNode = tempNode->next;
	}
	free(node);
	return (NULL);
}
