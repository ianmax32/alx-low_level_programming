#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - function that adds a new node at the end of
 * list_t
 *@head:liinked list head node
 *Return:0
*/

void free_list(list_t *head)
{
	list_t *newList;

	while (head)
	{
		newList = head;
		free(newList->str);
		free(newList);
		head = head->next;
	}
}


