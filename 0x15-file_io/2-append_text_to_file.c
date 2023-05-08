#include "main.h"

/**
 * append_text_to_file - At the end of a file, appends text.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return:If the file does not exist the user lacks write permissions - -1
 *         If the function fails or filename is NULL - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int l, g, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	l = open(filename, O_WRONLY | O_APPEND);
	g = write(l, text_content, len);

	if (l == -1 || g == -1)
		return (-1);

	close(l);

	return (1);
}
