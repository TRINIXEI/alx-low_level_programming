#include "main.h"

/**
 * print_binary - The binary should be print equivalent to the decimal number
 * @n: The number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int liquid;
	int m, count = 0;

	for (m = 63; m >= 0; m--)
	{
		liquid = n >> m;

		if (liquid & 1)
		{
			count++;
			_putchar('1');
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
