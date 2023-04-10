#include "main.h"
#include <stdlib.h>

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
	char *buf;
	ssize_t fd;
	ssize_t v;
	ssize_t k;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	k = read(fd, buf, letters);
	v = write(STDOUT_FILENO, buf, k);

	free(buf);
	close(fd);
	return (v);
}
