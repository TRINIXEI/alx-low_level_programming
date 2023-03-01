#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int o, j, i;


	O = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (O < size)
	{
		j = size - O < 10 ? size - O : 10;
		printf("%08x: ", O);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + O + i));
			else
				printf(" ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + O + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		O += 10;
	}
}
