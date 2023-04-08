#include "main.h"

/**
 * set_bit - A bit at a given index to set to 1
 * @n: A pointer to the number to change
 * @index: The index of the bit to set to 1
 * Return: -1 for failure, 1 on succes.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = ((1UL << index) | *n);
	return (1);

	if (index > 63)
		return (-1);
}
