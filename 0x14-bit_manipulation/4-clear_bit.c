#include "main.h"

/**
 * clear_bit - The value of a given bit to be set to 0
 * @n: A pointer to the number to change
 * @index: An index of the bit to clear
 * Return: -1 if failed, 1 on succes.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
