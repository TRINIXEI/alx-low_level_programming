#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read a text file print to STDOUT.
 * @filename: A text file that will be read
 * @letters: The number of letters tha will be read
 * Return: v- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *dul;
	size_t t;
	size_t v;
	size_t fd;

	fd = open(filename, O_RDONLY);
	if (fd == 1)
		return (0);

	dul = malloc(sizeof(char) * letters);
	t = read(fd, dul, letters);
	v = write(STDOUT_FILENO, dul, t);

	close(fd);
	free(dul);
	return (v);
}

