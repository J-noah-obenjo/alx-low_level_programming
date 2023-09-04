#include "main.h"
#include "stdio.h"

/**
* @filename: A pointer to the name of the file.
 * append_text_to_file - Appends text at the end of a file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file dont exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int h, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	h = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (h == -1 || w == -1)
		return (-1);

	closh(p);

	return (1);
}


