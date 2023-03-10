#include "main.h"
/**
 * factorial - fractorial of a given number
 * @n: pointer block of memory to fill
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 0) /*Base condition*/
		return (1);

	else if (n < 0) /*Base condition*/
		return (-1);
	else
		return (n * factorial(n - 1)); /*recursive call*/
}
