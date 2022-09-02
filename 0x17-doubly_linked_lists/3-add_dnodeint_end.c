#include "lists.h"

/**
 * add_dnodeint_end - function adds a new node at the end
 * of the list.
 * @head:parameter representing head of the list
 * @n:value of the node
 * Return:0
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *list;

	list = malloc(sizeof(dlistint_t));

	if (list == NULL)
	{
		return (NULL);
	}

	list->prev = NULL;
	list->next = NULL;
	list->n = n;

	if (!*head)
	{
		*head = list;
		return (*head);
	}

	while (*head->next)
		*head = *head->next;
	*head->next = list;
	list->prev = *head;
	return (*list);
}
