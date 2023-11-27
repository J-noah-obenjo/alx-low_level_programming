#include "lists.h"

/**
 * listint_len -  provides the count of elements in a linked list.
 * @k: linked list of type listint_t to traverse
 *
 * Return: count of nodes present
 */
size_t listint_len(const listint_t k)
{
	size_t num = 0;

	while (k)
	{
		num++;
	k = k->next;
	}

	return (num);
}
