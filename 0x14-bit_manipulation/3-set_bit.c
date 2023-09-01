#include "main.h"

/**
 * set_bit - set bit index to 1
 * @index: bit index set to 1
 * @n: header or pointer to the digit or number to change
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
