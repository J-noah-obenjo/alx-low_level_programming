#include "lists.h"

/**
 * sum_listint - calculates the total of all the data in a listint_t list
 * Return: resulting sum
 *
 * @head: initial node in the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
