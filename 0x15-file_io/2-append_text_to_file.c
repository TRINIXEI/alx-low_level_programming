#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: String should be add to the end of the file.
 * Return: -1 If fails or filename is NULL.
 *         If the file does not exist the user lacks write permissions -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int n, k, len = 0;

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	if (filename == NULL)
		return (-1);

	n = open(filename, O_WRONLY | O_APPEND);
	k = write(n, text_content, len);

	if (n == -1 || k == -1)
		return (-1);

	close(n);

	return (1);
}

