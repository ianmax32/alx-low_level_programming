#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of
 * list_t
 *@head:linked list head
 *@str:string inside the struct
 *Return:0
*/

list_t *add_node_end(list_t **head, const char *str)
{
	size_t counter;
	list_t *newList;
	list_t *oldList;

	counter = 0;
	newList = malloc(sizeof(list_t));

	if (newList == NULL)
		return (NULL);
	while (str[counter])
	{
		counter++;
	}

	newList->len = counter;
	newList->next = NULL;
	newList->str = strdup(str);

	if (*head == NULL)
	{
		*head = newList;
		return (*head);
	}
	else
	{
		oldList = *head;
		while (oldList->next)
			oldList = oldList->next;
	}
	oldList->next = newList;
	return (*head);
}
