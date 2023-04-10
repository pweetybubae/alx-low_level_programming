#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL returns (-1).
 *         If file does not exist the user lacks write permission return -1.
 *         Otherwise (1).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, r, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	r = write(p, text_content, len);

	if (p == -1 || r == -1)
		return (-1);

	close(p);

	return (1);
}
