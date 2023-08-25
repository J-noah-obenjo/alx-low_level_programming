#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * @head: double pointer to the list_t list in the linked list
 * add_node_end -appends  a new node at the end of a linked list
 * @str: string to be inserted into the new node
 *
 * Return:address of the new element in a list, or Null when the element fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
