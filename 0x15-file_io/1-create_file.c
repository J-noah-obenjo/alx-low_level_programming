include "main.h"
#include  "stdio.h"
#include

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create or to be created.
 * @text_content: A pointer to a string to be written to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int js, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	js = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(js, text_content, len);

	if (js == -1 || w == -1)
		return (-1);

	close(js);

	return (1);
}

