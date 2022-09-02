#include "lists.h"

/**
 * insert_dnodeint_at_index - function inserts a new node at
 * a given position.
 * @h:pointer to the list
 * @idx:index of the list to insert the new node
 * @n:value to insert at the node
 * Return:0
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int a;

	new = malloc(sizeof(dlistint_t));

	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		new->prev = NULL;
		*h = new;
		return (new);
	}

	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->next = NULL;
	new->n = n;

	temp = *h;
	a = 0;
	while (temp->next)
	{
		a++;
		if (a == idx)
		{
			new->prev = temp->prev;
			new->next = temp->next;
			temp->prev = new;
		}
		else
			temp = temp->next;
	}
	return (temp);
}


