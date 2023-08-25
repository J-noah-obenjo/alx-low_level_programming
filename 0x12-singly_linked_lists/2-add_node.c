#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_node - inserts a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to insert in the node
 *
 * Return: the address of the newly inserted element, or NULL if it fails
 */
list_t *insert_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return NULL;

	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = (*head);
	(*head) = new_node;

	return ((*head));
}

