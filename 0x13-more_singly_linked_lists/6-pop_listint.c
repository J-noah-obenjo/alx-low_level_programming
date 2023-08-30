#include "lists.h"

/**
 * pop_listint - removes the head node of a linked list
 * @start: pointer to the initial element in the linked list
 *
 * Return: the data inside the elements that was removed,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **start)
{
	listint_t *temp;
	int num;

	if (!start || !*start)
		return (0);

	num = (*start)->n;
	temp = (*start)->next;
	free(*start);
	*start = temp;

	return (num);
}
