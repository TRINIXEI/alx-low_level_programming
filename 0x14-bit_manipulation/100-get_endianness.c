#include "main.h"

/**
 * get_endianness - To checks a machine big or small endian
 * Return: 1 for small, 0 for big
 */
int get_endianness(void)
{
	unsigned int g = 1;
	char *k = (char *) &g;

	return (*k);
}
