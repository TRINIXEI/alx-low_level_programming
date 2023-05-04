#include "main.h"

/**
 * set_bit - A bit should be set  at a given index to 1
 * @n: A pointer to the number to change
 * @index: set the index of the bit to 1
 * Return: on success 1, on failure -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
