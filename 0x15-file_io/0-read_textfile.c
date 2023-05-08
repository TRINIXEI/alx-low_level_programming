#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file should be print to STDOUT.
 * @filename: The text file to be read
 * @letters: The num of letters we have to read
 * Return: w- This is the actual num of bytes being read and printed
 *            0 if filename is NULL or function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t k;
	ssize_t j;
	ssize_t df;
	char *buf;

	df = open(filename, O_RDONLY);
	if (df == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	j = read(df, buf, letters);
	k = write(STDOUT_FILENO, buf, j);

	free(buf);
	close(df);
	return (k);
}
