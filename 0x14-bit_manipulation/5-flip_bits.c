#include "main.h"

/**
 * flip_bits - The num of bits to be change should be count
 * from one number to another
 * @n: The first num
 * @m: The second num
 * Return: The num of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int frequency;
	unsigned long int exclusive = n ^ m;
	int k, count = 0;

	for (k = 63; k >= 0; k--)
	{
		frequency = exclusive >> k;
		if (frequency & 1)
			count++;
	}

	return (count);
}

