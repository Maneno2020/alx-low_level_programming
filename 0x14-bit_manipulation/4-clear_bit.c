#include "main.h"

/**
 * clear_bit - Setting a bit to 0 at given index
 * @n: the number to set bit in
 * @index: the index to initialize bit at
 * Return: 1 for success, or -1 if false
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max = ~(max << index);
	if (max == 0x00)
		return (-1);
	*n &= max;
	return (1);
}
