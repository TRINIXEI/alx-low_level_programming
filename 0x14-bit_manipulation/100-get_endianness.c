#include "main.h"

/**
 * get_endianness - A machine to be checked if little or big
 * Return: 1 if little, 0 if big.
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *q = (char *) &x;

	return (*q);
}
