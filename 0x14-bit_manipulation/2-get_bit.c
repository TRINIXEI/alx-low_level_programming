#include "main.h"

/**
 * get_bit - returns the value of a bit in a decimal num at an index
 * @n:The  number to search
 * @index: An index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	bit_val = (n >> index) & 1;

	return (bit_val);

	if (index > 63)
		return (-1);
}
