#include "main.h"
#include <unistd.h>
/**
 * _putchar - write character c to stdout
 * @c: input
 * Return: on success 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
