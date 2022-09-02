#include "lists.h"

/**
 * add_dnodeint - function adds a new node at the beginning
 * of the list.
 * @head:parameter representing head of the list
 * @n:number of elements in the list
 * Return:0
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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

	if (*head)
	{
		(*head)->prev = list;
		list->next = *head;
	}
	*head = list;
	return (*head);
}
