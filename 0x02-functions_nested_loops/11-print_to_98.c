#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - printa all number from input to 98
 * @n : number to start from
 * Return:0 or 1
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
