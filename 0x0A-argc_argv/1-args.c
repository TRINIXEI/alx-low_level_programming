#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of args
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Zero
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
