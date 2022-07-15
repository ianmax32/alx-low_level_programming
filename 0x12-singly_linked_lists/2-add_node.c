#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that prints all elements in a list
 * list_t
 *@head:linked list head node
 *@str:string inside the struct
 *Return:0
*/

list_t *add_node(list_t **head, const char *str)
{
	size_t counter;
	list_t *newList;

	counter = 0;
	newList = malloc(sizeof(list_t));

	if (newList == NULL)
		return (NULL);
	while (str[counter])
	{
		counter++;
	}

	newList->len = counter;
	newList->next = *head;
	newList->str = strdup(str);
	*head = newList;
	return (newList);
}
