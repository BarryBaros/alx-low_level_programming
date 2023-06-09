#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @file: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *file, size_t letters)
{
	char *buf;
	ssize_t fn;
	ssize_t w;
	ssize_t r;

	fn = open(file, O_RDONLY);
	if (fn == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fn, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fn);
	return (w);
}
