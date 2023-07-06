#include "main.h"

/**
 * set_bit - initialize a bit at a given index to 1
 * @n: pointing to the number to change
 * @index: position of the bit to intialize to 1
 *
 * Return: 1 if True, -1 for false
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
