#include "main.h"
#include<stdio.h>
/**
 * @index: index of a given   bit to clear
 *  clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number or digit to change
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
