#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes the node in
 * linked list at a given position
 * @head:linked list as an argument
 * @index:index of the node starting at 0
 * Return:0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *node, *tempNode;

	if (*head == NULL)
		return (-1);

	node = *head;

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(node);
		return (1);
	}

	a = 0;
	while (node)
	{
		if (a == index)
		{
			tempNode = node;
			node = node->next;
			if (node == NULL)
				return (-1);
			tempNode->next = node->next;
			free(node);
			node = NULL;
			return (1);
		}
		a++;
		node = node->next;
	}
	return (-1);
}
