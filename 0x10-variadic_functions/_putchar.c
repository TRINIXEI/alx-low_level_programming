#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: the character to print
 * Return: on success 1
 * on error -1 is returned and the errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1))
}
