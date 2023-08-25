#include <stdlib.h>
#include "lists.h"

/**
 * @head: pointer to a list_t listed to be freed
 * free_list - releases a linked list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}











