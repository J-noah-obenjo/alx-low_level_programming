#include "lists.h"

/**
 * add_nodeint - inserts a fresh node at the start of a linked list
 * @head: pointer to the initial node in the list
 * @j: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL upon failure
 */
listint_t *add_nodeint(listint_t **head, const int j)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->j = j;
	new->next = *head;
	*head = new;

	return (new);
}
