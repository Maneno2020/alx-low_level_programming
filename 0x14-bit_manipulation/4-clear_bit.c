#include "main.h"

/**
 * clear_bit - initialize the value of a bit to 0.
 * at a given index.
 * @n: reference of an unsigned long int.
 * @index: position of the bit.
 *
 * Return: 1 if it worked, 0 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (0);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
