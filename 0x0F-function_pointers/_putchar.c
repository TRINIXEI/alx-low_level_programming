#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: character to print
 * Return: on success 1
 * on error -1is returned and set the errno appropriately
 */
int _putchar(char c)
{
	return(write (1,&c, 1));
}
