#include "lists.h"

/**
 * invert__listint - inverts  a linked list
 * @head: pointer to the initial node in the list
 *
 * Return: pointer to the initial node in the transformed list
 */
listint_t *invert_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}


