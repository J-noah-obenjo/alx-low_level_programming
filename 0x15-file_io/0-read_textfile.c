
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @letters: number of letters to be read
 *
 * @filename: text file that’s being read
 * Return: w- actual number of bytes read and printed out
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *man;
	ssize_t js;
	ssize_t w;
	ssize_t t;

	js = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	man = malloc(sizeof(char) * letters);
	t = read(js, man, letters);
	w = write(STDOUT_FILENO, man, t);

	close(js);
free(man);
	return (w);
}










