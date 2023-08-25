#include <stdlib.h>
#include "lists.h"

/**
 * count_elements - computes the number of elements in a linked list
 * @h: pointer to the list_t list in linked list given
 *
 * Return: the count of elements in the given linked list
 */
size_t count_elements(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}






