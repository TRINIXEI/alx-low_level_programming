#include "main.h"

/**
 * flip_bits - counts the num of bits to change
 * to get from a num to another
 * @n: The first Num
 * @m: The second Num
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int exclusive = n ^ m;
	unsigned long int current;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}

	return (count);
}
